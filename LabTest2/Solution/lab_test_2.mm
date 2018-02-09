int add(int a,int b){
	return a+b;
}
int main(){
	int a = 9,b = 18;
	int c = add(a,b);
	if(c<20)goto L0;
	else goto L1;
	L0:c = c*2;
	L1:c = c+2;
	return 0;
}

