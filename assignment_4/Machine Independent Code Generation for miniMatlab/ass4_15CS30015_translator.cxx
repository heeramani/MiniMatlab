#include "ass4_15CS30015_translator.h"
#include "y.tab.h"
#include <iostream>
using namespace std;

int temp_count=0;
type_n *glob_type;
int glob_width;
int next_instr;
symtab *glob_st =new symtab();
symtab *curr_st = new symtab();
quad_arr glob_quad;



int size_bool=1;
int size_double=8;
int size_char=1;
int size_int=4;
int size_pointer=4;


type_n::type_n(types t,int sz,type_n *n)
{
	
	size=sz;
	basetp=t;
	next=n;
}

int type_n::getSize()
{
	if(this==NULL) 					return 0;
	if((this->basetp) == tp_arr)	return ((this->size)*(this->next->getSize()));
	if((this->basetp) == tp_void)	return 0;
	if((this->basetp) == tp_int)	return size_int;
	if((this->basetp) == tp_double)	return size_double;
	if((this->basetp) == tp_bool)	return size_bool;
	if((this->basetp) == tp_char)	return size_char;
	if((this->basetp) == tp_ptr)	return size_pointer;
}

types type_n::getBasetp()
{
	return this!=NULL ? this->basetp : tp_void;
}

void type_n::printSize()
{
	cout << size << "\n";
	//printf("%d\n",size);
}

void type_n::print()
{
	switch(basetp){
		case tp_void:
				printf("Void");
				break;
		case tp_bool:
				printf("Bool");
				break;
		case tp_int:
				printf("Int");
				break;
		case tp_char:
				printf("Char");
				break;
		case tp_double:
				printf("Double");
				break;
		case tp_ptr:
				printf("ptr(");
				if(this->next!=NULL)
					this->next->print();
				printf(")");
				break;
		case tp_arr:
				printf("array(%d,",size);
				if(this->next!=NULL)
					this->next->print();
				printf(")");
				break;
		case tp_func:
				printf("Function()");
				break;
		default:
			printf("TYPE NOT FOUND\n");
			exit(-1);
	}

}



array::array(string s,int sz,types t)
{
	this->base_arr=s;
	this->tp=t;
	this->bsize=sz;
	this->dimension_size=1;
}

void array::addindex(int i)
{
	this->dimension_size=this->dimension_size+1;
	this->dims.push_back(i);
}

void funct::print()
{

	printf("Funct(");
	int i=0;
	while(i<typelist.size()){

		if(i!=0)	printf(",");
		printf("%d ",typelist[i]);
		i++;
	}
	printf(")");

}

funct::funct(vector<types> tpls)
{
	typelist=tpls;
}
symdata::symdata(string n)
{
	name=n;
	//printf("sym%s\n",n.c_str());
	tp_n=NULL;
	size=0;
	//tp_n=NULL;
	offset=-1;
	var_type="";
	isFunction=false;
	isInitialized=false;
	//isFunction=false;
	isArray=false;
	arr=NULL;
	fun=NULL;
	nest_tab=NULL;
}

void symdata::createarray()
{
	arr=new array(this->name,this->size,tp_arr);
}


symtab::symtab()
{
	name="";
	offset=0;
}

symtab::~symtab()
{
	int i = 0;
	
	while(i<symbol_tab.size()){
	{
		type_n *p1=symbol_tab[i]->tp_n;
		type_n *p2;
		while(true)
		{
			if(p1 == NULL)				break;
			p2=p1;
			p1=p1->next;
			delete p2;
		}
	}i++;
}
}

type_n *CopyType(type_n *t)
{
	/*Duplicates the input type and returns the pointer to the newly created type*/
	if(t == NULL) return t;
	type_n *ret = new type_n(t->basetp);

	ret->size = t->size;
	ret->basetp = t->basetp;

	ret->next = CopyType(t->next);
	return ret;
}

symdata* symtab::lookup(string n)
{
	int i = 0;
	while(i<symbol_tab.size()){
		if(symbol_tab[i]->name == n)	return symbol_tab[i];
		i++;	
	}
	symdata *temp_o=new symdata(n);
	temp_o->i_val.int_val=0;
	symbol_tab.push_back(temp_o);
	return symbol_tab[symbol_tab.size()-1];
}

symdata* symtab::search(string n)
{

	int i = 0;
	while(i<symbol_tab.size()){
		if(symbol_tab[i]->name == n)	return (symbol_tab[i]);
		i++;
	}
	return NULL;
}

symdata* symtab::gentemp(type_n *type)
{
	char c[10];
	sprintf(c,"t%03d",temp_count);
	temp_count++;
	symdata *temp=lookup(c);
	int temp_sz;
	if(type==NULL)
		temp_sz=0;

	switch(type->basetp){
		case tp_void:	temp_sz = 0;
						break;

		case tp_int:	temp_sz = size_int;
						break;

		case tp_double:	temp_sz = size_double;
						break;

		case tp_bool:	temp_sz = size_bool;
						break;

		case tp_char:	temp_sz = size_char;
						break;

		case tp_ptr:	temp_sz = size_pointer;
						break;

		default:		
						temp_sz=type->getSize();
					}
	temp->size=temp_sz;
	temp->var_type="temp";
	temp->tp_n=type;
	this->offset=this->offset+(temp->size);
	return temp;
}

void symtab::update(symdata *sm,type_n *type,basic_val initval,symtab *next)
{
	sm->tp_n=CopyType(type);
	sm->i_val=initval;
	sm->nest_tab=next;
	int temp_sz;
	if(sm->tp_n==NULL)
		temp_sz=0;
	switch(type->basetp){
		case tp_void:	temp_sz = 0;
						break;

		case tp_int:	temp_sz = size_int;
						break;

		case tp_double:	temp_sz = size_double;
						break;

		case tp_bool:	temp_sz = size_bool;
						break;

		case tp_char:	temp_sz = size_char;
						break;

		case tp_ptr:	temp_sz = size_pointer;
						break;

		default:		
						temp_sz=type->getSize();
					}
	sm->size=temp_sz;
	sm->offset=this->offset+(sm->size);
	sm->isInitialized=false;
}

void symtab::print()
{	string a114 = "_______________________________________________________________________________________\n";
	cout << a114;
	//printf("_______________________________________________________________________________________\n");
	printf("PRINTING SYMBOL\n");
	printf("_______________________________________________________________________________________\n");
	printf("\n");
	string a111 = "\n__________________________________________________________________________________\n";
	cout << a111;
	//printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	string a112 = "Symbol table: ";
	cout << a112 << name.c_str() << "\n";
	//printf("Symbol Table : %s\n",name.c_str());
	//printf("Name\tValue\tvar_type\tsize\tOffset\tType\n");
	cout << "Name\tValue\tvar_type\tsize\tOffset\tType\n";
    for(int i = 0; i<(symbol_tab).size(); i++)
    {
        symdata * t = symbol_tab[i];
        printf("%s\t",symbol_tab[i]->name.c_str()); 
        if(t->isInitialized)
        {
        	
        	switch((t->tp_n)->basetp){
        		case tp_char:	cout << t -> i_val .char_val << "\t";
        						break;

        		case tp_int:	cout << t -> i_val .int_val;
        						break;

        		case tp_double:	cout << t -> i_val .double_val;
        						break;

        		default:		cout << "----"; 
        	}
      	}
      	else
      		cout << "null";

      	cout<<"\t" << t->var_type.c_str();
      	cout << "\t" << t ->size << "\t" << t->offset<<"\t";
		if(t->var_type == "func")	cout << "ptr-to-St(t->nest_tab->name.c_str())";
		if(t->tp_n != NULL)			(t->tp_n)->print();
		cout << "\n";
	}
	cout << "\n";
	cout << a114;
	//cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
}

list* makelist(int i)
{
	list *temp = new list;
	temp->index=i;
	temp->next=NULL;
	return temp;
}
list* merge(list *lt1,list *lt2)
{
	list *temp = new list;
	list *p1=temp;
	int flag=0;
	list *l1=lt1;
	
	while(l1!=NULL)
	{
		flag=1;
		p1->index=l1->index;
		if(l1->next!=NULL)
		{
			p1->next = new list;
			
			p1=p1->next;
		}
		l1=l1->next;
	}
	list *l2=lt2;
	while(l2!=NULL)
	{
		if(flag==1)
		{
			p1->next = new list;
			
			p1=p1->next;
			flag=0;
		}
		p1->index=l2->index;
		if(l2->next!=NULL)
		{
			p1->next = new list;
			//p1->next=(list*)malloc(sizeof(list));
			p1=p1->next;
		}
		l2=l2->next;
	}
	p1->next=NULL;
	return temp;
}


quad::quad(opcode opc,string a1,string a2,string rs)
{
	this->op=opc;
	this->arg1=a1;
	this->result=rs;
	this->arg2=a2;
}

void quad::print_arg()
{
	cout << "\t" << result.c_str() << "\t=\t" << arg1.c_str() << "\top \t" <<arg2.c_str() <<"\t";
	//printf("\t%s\t=\t%s\top\t%s\t",result.c_str(),arg1.c_str(),arg2.c_str());
}

quad_arr::quad_arr()
{
	next_instr=0;
}

void quad_arr::emit(opcode opc, string arg1, string arg2, string result)
{
	if(result.size()!=0)
	{
		quad new_elem(opc,arg1,arg2,result);
		arr.push_back(new_elem);
	}
	else if(arg2.size()!=0)
	{
		quad new_elem(opc,arg1,"",arg2);
		arr.push_back(new_elem);
	}
	else if(arg1.size()!=0)
	{
		quad new_elem(opc,"","",arg1);
		arr.push_back(new_elem);
	}
	else
	{
		quad new_elem(opc,"","","");
		arr.push_back(new_elem);
	}
	next_instr++;
}

void quad_arr::emit(opcode opc, int val, string operand)
{
	char str[20];
	sprintf(str, "%d", val);
	switch(operand.size()){
		case 0:	{quad new_quad(opc,"","",str);
				arr.push_back(new_quad);
				break;}
		default:{
				quad new_quad(opc,str,"",operand);
				arr.push_back(new_quad);
			}
	}
	next_instr++;
}

void quad_arr::emit(opcode opc, double val, string operand)
{
	char str[20];
	sprintf(str, "%lf", val);
	switch(operand.size()){
		case 0:	{quad new_quad(opc,"","",str);
				arr.push_back(new_quad);
				break;}

		default:{
				quad new_quad(opc,str,"",operand);
				arr.push_back(new_quad);
			}
	}
	next_instr++;
}

void quad_arr::emit(opcode opc, char val, string operand)
{
	char str[20];
	sprintf(str, "'%c'", val);	switch(operand.size()){
		case 0:	{quad new_quad(opc,"","",str);
				arr.push_back(new_quad);
				break;}

		default:{
				quad new_quad(opc,str,"",operand);
				arr.push_back(new_quad);
			}
	}
	next_instr++;

}

void quad_arr::print()
{
		string result;
		string arg1;
		string arg2;
		//int i = 0;
		opcode op;

	for(int i=0;i<next_instr;i++)
	{

		op=arr[i].op;
		arg1=arr[i].arg1;
		arg2=arr[i].arg2;
		result=arr[i].result;
		printf("%3d. :",i);
		if(Q_PLUS<=op && op<=Q_NOT_EQUAL)
	    {
	    	cout << result.c_str() <<"\t=\t" <<  arg1.c_str() << " ";
	        switch(op)
	        {
	            case Q_PLUS: 			cout << "+"; break;
	            case Q_MINUS: 			cout << "-"; break;
	            case Q_MULT: 			cout << "*"; break;
	            case Q_DIVIDE:			cout << "/"; break;
	            case Q_MODULO: 			cout << "%%";break;
	            case Q_LEFT_OP: 		cout << "<<";break;
	            case Q_RIGHT_OP:		cout << ">>";break;
	            case Q_XOR:				cout << "^"; break;
	            case Q_AND:				cout << "&"; break;
	            case Q_OR:				cout << "|"; break;
	            case Q_LOG_AND:			cout << "&&";break;
	            case Q_LOG_OR:			cout << "||";break;
	            case Q_LESS:			cout << "<"; break;
	            case Q_LESS_OR_EQUAL:	cout << "<=";break;
	            case Q_GREATER_OR_EQUAL:cout << ">=";break;
	            case Q_GREATER:			cout << ">"; break;
	            case Q_EQUAL:			cout << "==";break;
	            case Q_NOT_EQUAL:		cout << "!=";break;
	        }
	        cout << " " << arg2.c_str() << "\n";
	    }
	    else if(Q_UNARY_MINUS<=op && op<=Q_ASSIGN)
	    {
	    	cout << result.c_str() << "\t=\t";
	    	 //Unary Assignment Instruction
	    	if(op = Q_UNARY_MINUS) 		cout << "-";
	    	else if(op = Q_UNARY_PLUS)	cout << "+";
	    	else if(op = Q_COMPLEMENT)	cout << "~";
	    	else if(op = Q_NOT)			cout << "!";

	    	//Copy Assignment Instruction

	    	else if(op = Q_ASSIGN)		break;

	        cout << arg1.c_str() << "\n";
	    }
	    else if(op == Q_GOTO){
	    	cout << "goto ";
	    	cout << result.c_str() << "\n";
	    }
	    else if(Q_IF_EQUAL<=op && op<=Q_IF_GREATER_OR_EQUAL)
	    {
	    	cout << "if " << arg1.c_str() << " ";
	        if(op = Q_IF_LESS)						cout << "<";
	        else if (op = Q_IF_GREATER)				cout << ">";
	        else if (op = Q_IF_LESS_OR_EQUAL)		cout << "<=";
	        else if (op = Q_IF_GREATER_OR_EQUAL)	cout << "==";
	        else if (op = Q_IF_EQUAL)				cout << "!=";
	        else if (op = Q_IF_EXPRESSION) 			cout << "!= 0";
	        else if (op = Q_IF_NOT_EXPRESSION) 		cout << "== 0";
	        cout << arg2.c_str() << "\tgoto " << "\n" << result.c_str();
	    }
	    else if(Q_CHAR2INT<=op && op<=Q_DOUBLE2INT)
	    {
	    	cout << result.c_str();
	    	cout << "\t=\t";
	        if(op = Q_CHAR2INT)					cout << " Char2Int(" << arg1.c_str() << ")\n";
	        else if  (op = Q_CHAR2DOUBLE)		cout << " Char2Double("<< arg1.c_str() << ")\n";
	        else if (op = Q_INT2CHAR)			cout << " Int2Char(" << arg1.c_str() << ")\n";
	        else if (op = Q_DOUBLE2CHAR)		cout << " Double2Char" << arg1.c_str() << ")\n";
	        else if (op = Q_INT2DOUBLE)			cout << " Int2Double" << arg1.c_str() << ")\n";
	        else if (op = Q_DOUBLE2INT) 		cout << " Double2Int" << arg1.c_str() << ")\n";
		
	    }
	    else if(op == Q_PARAM)					cout << "param\t" << result.c_str() << "\n";
	    
	    else if(op == Q_CALL)
	    {
	        if(!result.c_str())					cout << "call" << arg1.c_str() << arg2.c_str() << "\n";
					//printf("call %s, %s\n", arg1.c_str(), arg2.c_str());
			else								cout << result.c_str() << "\t=\tcall " << arg1.c_str() << "," << arg2.c_str() << "\n";
					//printf("%s\t=\tcall %s, %s\n", result.c_str(), arg1.c_str(), arg2.c_str());
	    }
	    else if(op == Q_RETURN)					cout << "return\t" << result.c_str() << "\n";
	    /*
	    {
	        printf("return\t");printf("%s\n",result.c_str());
	    }*/
	    else if( op == Q_RINDEX)				cout << result.c_str() << "\t=\t" << arg1.c_str() << "[" << arg2.c_str() << "]\n";
	    /*
	    {
	        printf("%s\t=\t%s[%s]\n", result.c_str(), arg1.c_str(), arg2.c_str());
	    }
	    */
	    else if(op == Q_LINDEX)					cout << result.c_str() << "[" << arg1.c_str() << "]" << "\t=\t" << arg2.c_str() << "\n";
	    /*
	    {
	        printf("%s[%s]\t=\t%s\n", result.c_str(), arg1.c_str(), arg2.c_str());
	    }
	    */
	    else if(op == Q_LDEREF)					cout << "*" << result.c_str() << "\t=\t" << arg1.c_str() << "\n";
	    /*
	    {
	        printf("*%s\t=\t%s\n", result.c_str(), arg1.c_str());
	    }
	    */
	    else if(op == Q_RDEREF)					cout << result.c_str() << "\t=\t* " << arg1.c_str() << "\n";
	    /*
	    {
	    	printf("%s\t=\t* %s\n", result.c_str(), arg1.c_str());
	    }
	    */
	    else if(op == Q_ADDR)					cout << result.c_str() << "\t=\t& " << arg1.c_str() << "\n";
	    /*
	    {
	    	printf("%s\t=\t& %s\n", result.c_str(), arg1.c_str());
	    }
	    */

	}
}

void backpatch(list *l,int i)
{
	char str[10];
	list *temp2;
	list *temp =l;
	
	sprintf(str,"%d",i);
	
	for(;temp!=NULL;){
		glob_quad.arr[temp->index].result = str;
		temp2=temp;
		temp=temp->next;
		free(temp2);
	}

/*
	while(temp!=NULL)
	{
		glob_quad.arr[temp->index].result = str;
		temp2=temp;
		temp=temp->next;
		free(temp2);
	}
*/	
}

void typecheck(expresn *e1,expresn *e2,bool isAssign)
{
	types type2,type1;
	type2=(e2->type)->basetp;
	type1=(e1->type)->basetp;
	
	if(type1==type2)								return;
	
	if(!isAssign)
	{
		if(type1>type2)
		{
			symdata *temp = curr_st->gentemp(e1->type);
			if(type1 == tp_int && type2 == tp_char)			glob_quad.emit(Q_CHAR2INT, e2->loc->name, temp->name);
				
			else if(type1 == tp_double && type2 == tp_int)	glob_quad.emit(Q_INT2DOUBLE, e2->loc->name, temp->name);
				
			e2->loc = temp;
			e2->type = temp->tp_n;
		}
		else
		{
			symdata *temp = curr_st->gentemp(e2->type);
			if(type2 == tp_int && type1 == tp_char)			glob_quad.emit(Q_CHAR2INT, e1->loc->name, temp->name);
				
			else if(type2 == tp_double && type1 == tp_int)	glob_quad.emit(Q_INT2DOUBLE, e1->loc->name, temp->name);
					
			e1->loc = temp;
			e1->type = temp->tp_n;
		}		
	}
	else
	{
		symdata *temp = curr_st->gentemp(e1->type);
		if(type1 == tp_int && type2 == tp_double)			glob_quad.emit(Q_DOUBLE2INT, e2->loc->name, temp->name);
		else if(type1 == tp_double && type2 == tp_int)		glob_quad.emit(Q_INT2DOUBLE, e2->loc->name, temp->name);
		else if(type1 == tp_char && type2 == tp_int)		glob_quad.emit(Q_INT2CHAR, e2->loc->name, temp->name);
		else if(type1 == tp_int && type2 == tp_char)		glob_quad.emit(Q_CHAR2INT, e2->loc->name, temp->name);
		else{	
				string a101 = "Types compatibility not defined";
				cout << e1->loc->name.c_str() << e2->loc->name.c_str() << a101 << "\n";
				exit(-1);
		}
		
		e2->loc = temp;
		e2->type = temp->tp_n;
	}
}

void print_list(list *root)
{
	int flag=0;
	for(;root!=NULL;root ->next){
		cout << root->index;
		flag = 1;
	}
	if(flag==0)	cout << "Empty List\n";
	else		cout << "\n";
}
void conv2Bool(expresn *e)
{
	if((e->type)->basetp!=tp_bool)
	{
		(e->type) = new type_n(tp_bool);
		e->falselist=makelist(next_instr);
		glob_quad.emit(Q_IF_EQUAL,e->loc->name,"0","-1");
		e->truelist = makelist(next_instr);
		glob_quad.emit(Q_GOTO,-1);
	}
}

int main()
{
	yyparse();
	string a = "Global Symbol Table are following: ";
	glob_st->name=a;
	cout << "-------------------------------------------------------------------------------";
	string b = " Generated Quads for the given program as  following";
	cout << "\n" << b;
	glob_quad.print();
	//cout << "-------------------------------------------------------------------------------";
	string c = "Symbol table Maintained For the Given Program as following";
	cout << c << "\n";
	//printf("");
	glob_st->print();
	int i = 0;
	while(i<glob_st->symbol_tab.size()){
		((glob_st->symbol_tab[i])->nest_tab)->print();
		i++;
	}
	cout << "-------------------------------------------------------------------------------";

	return 0;
}
