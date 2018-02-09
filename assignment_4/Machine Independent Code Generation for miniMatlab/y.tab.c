/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass4_15CS30015.y" /* yacc.c:339  */

    #include "ass4_15CS30015_translator.h"
    void yyerror(const char*);
    extern int yylex(void);
    using namespace std;

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    POINTER = 295,
    INCREMENT = 296,
    DECREMENT = 297,
    LEFT_SHIFT = 298,
    RIGHT_SHIFT = 299,
    LESS_EQUALS = 300,
    GREATER_EQUALS = 301,
    EQUALS = 302,
    NOT_EQUALS = 303,
    AND = 304,
    OR = 305,
    ELLIPSIS = 306,
    MULTIPLY_ASSIGN = 307,
    DIVIDE_ASSIGN = 308,
    MODULO_ASSIGN = 309,
    ADD_ASSIGN = 310,
    SUBTRACT_ASSIGN = 311,
    LEFT_SHIFT_ASSIGN = 312,
    RIGHT_SHIFT_ASSIGN = 313,
    AND_ASSIGN = 314,
    XOR_ASSIGN = 315,
    OR_ASSIGN = 316,
    SINGLE_LINE_COMMENT = 317,
    MULTI_LINE_COMMENT = 318,
    IDENTIFIER = 319,
    INTEGER_CONSTANT = 320,
    FLOATING_CONSTANT = 321,
    ENUMERATION_CONSTANT = 322,
    CHAR_CONST = 323,
    STRING_LITERAL = 324,
    UNARY = 325
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define POINTER 295
#define INCREMENT 296
#define DECREMENT 297
#define LEFT_SHIFT 298
#define RIGHT_SHIFT 299
#define LESS_EQUALS 300
#define GREATER_EQUALS 301
#define EQUALS 302
#define NOT_EQUALS 303
#define AND 304
#define OR 305
#define ELLIPSIS 306
#define MULTIPLY_ASSIGN 307
#define DIVIDE_ASSIGN 308
#define MODULO_ASSIGN 309
#define ADD_ASSIGN 310
#define SUBTRACT_ASSIGN 311
#define LEFT_SHIFT_ASSIGN 312
#define RIGHT_SHIFT_ASSIGN 313
#define AND_ASSIGN 314
#define XOR_ASSIGN 315
#define OR_ASSIGN 316
#define SINGLE_LINE_COMMENT 317
#define MULTI_LINE_COMMENT 318
#define IDENTIFIER 319
#define INTEGER_CONSTANT 320
#define FLOATING_CONSTANT 321
#define ENUMERATION_CONSTANT 322
#define CHAR_CONST 323
#define STRING_LITERAL 324
#define UNARY 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "ass4_15CS30015.y" /* yacc.c:355  */

    int intval;   //to hold the value of integer constant
    char charval; //to hold the value of character constant
    idStr idl;    // to define the type for Identifier
    float floatval; //to hold the value of floating constant
    string *strval; // to hold the value of enumberation scnstant
    decStr decl;   //to define the declarators
    arglistStr argsl; //to define the argumnets list
    int instr;  // to defin the type used by M->(epsilon)
    expresn expon;   // to define the structure of expression
    list *nextlist;  //to define the nextlist type for N->(epsilon)

#line 266 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 283 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1017

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    74,    84,     2,
      76,    77,    72,    70,    83,    71,    80,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    94,
      87,    93,    88,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    78,     2,    79,    89,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    90,    82,    85,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    55,    61,    94,   103,   112,   121,   122,
     126,   128,   131,   155,   181,   182,   185,   205,   225,   228,
     232,   237,   242,   245,   249,   252,   272,   292,   337,   338,
     340,   343,   346,   349,   352,   355,   359,   378,   382,   385,
     391,   397,   404,   407,   413,   420,   423,   428,   434,   437,
     445,   453,   461,   470,   473,   481,   490,   493,   499,   502,
     508,   511,   517,   520,   531,   534,   546,   549,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   578,
     581,   600,   604,   607,   613,   621,   627,   631,   632,   633,
     634,   636,   636,   639,   643,   645,   652,   658,   659,   660,
     661,   663,   666,   669,   670,   673,   674,   675,   678,   679,
     680,   681,   682,   683,   685,   688,   690,   691,   693,   694,
     695,   697,   701,   703,   704,   706,   707,   709,   710,   711,
     713,   715,   749,   752,   756,   767,   770,   795,   796,   797,
     798,   833,   865,   866,   868,   871,   875,   875,   878,   881,
     885,   886,   888,   891,   893,   896,   900,   903,   905,   906,
     908,   910,   913,   914,   916,   917,   919,   919,   922,   924,
     925,   927,   928,   931,   932,   935,   938,   941,   944,   948,
     949,   950,   952,   956,   959,   963,   966,   971,   974,   978,
     982,   985,   990,  1003,  1012,  1014,  1023,  1031,  1041,  1043,
    1044,  1045,  1046,  1061,  1062,  1064,  1065,  1067,  1092,  1092,
    1095,  1096
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "POINTER", "INCREMENT", "DECREMENT",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUALS", "GREATER_EQUALS", "EQUALS",
  "NOT_EQUALS", "AND", "OR", "ELLIPSIS", "MULTIPLY_ASSIGN",
  "DIVIDE_ASSIGN", "MODULO_ASSIGN", "ADD_ASSIGN", "SUBTRACT_ASSIGN",
  "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "ENUMERATION_CONSTANT",
  "CHAR_CONST", "STRING_LITERAL", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'",
  "'~'", "'!'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'",
  "$accept", "M", "N", "primary_expression", "enumeration_constant",
  "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_operator", "assignment_expression",
  "constant_expression", "expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      43,    45,    42,    47,    37,   325,    40,    41,    91,    93,
      46,   123,   125,    44,    38,   126,    33,    60,    62,    94,
     124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -279

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-279)))

#define YYTABLE_NINF -210

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     944,  -279,  -279,  -279,  -279,   -48,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,   -41,   944,   944,  -279,   944,   944,   907,
    -279,  -279,   -58,   -29,    42,   -34,    -2,  -279,   344,    -1,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,    57,  -279,
      59,    42,  -279,    59,   662,  -279,   -41,    33,   944,  -279,
      59,     4,  -279,    49,   -15,  -279,  -279,  -279,  -279,    71,
     132,   726,   726,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,   597,    48,  -279,  -279,  -279,  -279,    77,   206,   758,
    -279,   119,    68,   107,    28,   163,    88,    90,   116,   166,
     -37,  -279,  -279,  -279,   268,  -279,  -279,   135,   673,    10,
     758,  -279,   -16,   597,  -279,   597,  -279,  -279,  -279,   -63,
     978,  -279,   978,   142,   758,   173,   139,   662,  -279,    31,
    -279,   175,  -279,  -279,   758,   758,   176,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,   758,  -279,
    -279,   758,   758,   758,   758,   758,   758,   758,   758,   758,
     758,   758,   758,   758,   758,   758,   758,  -279,  -279,   134,
     147,   758,   148,   152,  -279,   169,   182,   172,   758,   174,
     177,   157,   168,  -279,  -279,  -279,  -279,   170,   186,  -279,
    -279,   160,  -279,  -279,  -279,  -279,  -279,    50,   203,   220,
     217,  -279,   225,    42,   790,    12,  -279,  -279,  -279,  -279,
     234,   235,  -279,   758,  -279,  -279,  -279,   694,   236,  -279,
    -279,    78,  -279,  -279,  -279,  -279,   230,   237,  -279,    22,
    -279,  -279,  -279,  -279,  -279,   119,   119,    68,    68,   107,
     107,   107,   107,    28,    28,   163,    88,    90,   758,   758,
    -279,  -279,   224,  -279,   530,   530,   457,   223,   758,   226,
     758,  -279,   530,  -279,   381,  -279,  -279,  -279,  -279,   866,
     254,   758,   240,  -279,   242,   758,   241,   241,  -279,    48,
    -279,  -279,  -279,   662,   758,  -279,  -279,   116,   166,   758,
     530,  -279,   287,   758,   231,  -279,   168,  -279,    63,   758,
    -279,  -279,  -279,  -279,  -279,   245,  -279,  -279,   247,   145,
    -279,  -279,   168,  -279,   251,   248,  -279,   252,   530,   168,
    -279,  -279,  -279,    83,   238,  -279,   758,   758,  -279,  -279,
     258,  -279,  -279,   758,   264,  -279,   530,  -279,   758,   168,
     530,   249,   316,   530,  -279,   269,  -279,  -279,   319,  -279,
     262,   758,  -279,  -279,  -279,   530,   271,  -279,  -279,   530,
    -279
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   102,   127,   107,   122,    97,   106,   130,   104,
     105,   100,   128,   103,   108,    98,   109,   101,   129,   110,
     111,   112,   206,   133,    92,    92,   113,    92,    92,     0,
     203,   205,   120,     0,   143,     0,    85,    93,    95,     0,
     132,    91,    87,    88,    89,    90,     1,   204,     0,   150,
     148,   142,    84,   133,     0,   210,   133,     0,   208,   134,
     133,   131,    10,   125,     0,   123,   149,   151,    94,    95,
       0,     0,     0,     4,     5,     6,     7,     8,    32,    33,
      31,     0,   167,    30,    34,    35,    11,    24,    36,     0,
      38,    42,    45,    48,    53,    56,    58,    60,    62,    64,
      66,    79,   161,    96,   184,   207,   211,     0,   147,   143,
       0,   118,     0,     0,    28,     0,    25,    26,    82,     0,
     117,   160,   117,     0,     0,     0,     0,     0,   166,     0,
     169,     0,    16,    17,    23,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    68,     0,    36,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     2,     0,
       0,     0,     0,     0,     2,     0,     0,     0,   191,     0,
       0,     4,   190,   187,   188,   173,   174,     0,     2,   185,
     175,     0,   176,   177,   178,   135,   158,   133,     0,     0,
     152,   154,   146,   143,   145,   142,    81,   126,   119,   124,
       0,     0,     9,     0,   116,   114,   115,     0,     0,   172,
     162,   167,   164,   168,   170,    15,    22,     0,    20,     0,
      14,    80,    39,    40,    41,    43,    44,    46,    47,    51,
      52,    49,    50,    54,    55,    57,    59,    61,     0,     0,
       2,   201,     0,   200,   191,   191,   191,     0,     0,     0,
       0,     2,   191,   182,   191,   189,   156,   141,   140,     0,
       0,     0,    31,   144,     0,     0,    29,     0,    83,   167,
      37,   171,   163,     0,     0,    13,    12,    63,    65,     0,
     191,   181,     0,   191,     0,   199,     3,   202,     0,     0,
     179,   186,   153,   155,   159,     0,   139,   136,     0,     0,
     165,    21,     3,   180,     0,     0,     2,     0,   191,     3,
     137,   138,    18,   167,     0,     2,   191,   191,     2,   194,
       0,    19,     2,     0,     0,     3,   191,     2,     0,     3,
     191,     0,   193,   191,    67,     0,   198,     2,     0,   195,
       0,   191,     2,   196,     3,   191,     0,   192,     2,   191,
     197
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,  -138,  -278,  -279,  -279,  -279,  -279,  -279,   -68,  -279,
     -82,    79,    75,     8,    73,   181,   195,   202,   113,   122,
    -279,  -109,  -279,   -28,  -113,   -76,   -26,  -279,     0,   161,
    -279,   320,  -279,    32,    55,   253,  -279,  -279,  -279,   281,
      21,  -279,   -14,  -279,  -279,   -99,  -279,  -279,   324,   267,
    -279,  -279,   111,  -279,    92,  -121,   131,  -213,  -279,  -279,
     283,  -211,  -279,   356,  -279,  -279,   162,  -279,  -156,  -279,
    -279,  -279,  -279,   392,  -279,  -279,  -279
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   248,   169,    86,    63,    87,   226,   227,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   148,   118,   207,   182,    22,    35,    56,    42,
      36,    37,    24,    25,   121,   215,    26,    33,    64,    65,
      27,    28,    69,    39,    61,    50,   274,   198,    40,    51,
     199,   200,   201,   202,   123,   103,   126,   127,   128,   129,
     130,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    29,    30,    31,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   206,   114,   116,   117,   119,   222,   150,   283,    38,
     204,   218,    55,   168,   212,   206,    32,     3,   317,     3,
     213,   149,   259,  -121,    41,    41,   102,    41,    41,    23,
     249,    34,   106,    12,   324,    12,   255,   119,   203,   119,
     275,   330,   149,   291,   292,    18,   107,    18,    62,     3,
     264,   300,    48,   -86,    -3,    49,   149,   341,   252,   229,
      52,   345,   206,    59,   348,    12,   208,   111,   112,   232,
     233,   234,    67,   158,   159,    60,   356,    18,   183,   313,
     108,    53,   109,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   102,
     294,   286,   122,   149,   271,   213,   228,   329,   197,   124,
     283,   125,   289,   120,   104,   160,   161,   131,   132,   133,
     231,    62,    34,   299,   223,   342,   124,  -157,   125,   346,
      49,    34,   349,  -157,   122,   280,   122,   315,   154,   155,
     318,   122,   110,   122,   357,   120,   213,   120,   360,   149,
     156,   157,   120,   134,   120,   135,   124,   136,   125,    70,
     282,   124,   310,   125,    54,   331,   239,   240,   241,   242,
     334,   335,   164,    71,    72,   214,   273,   214,   327,   165,
     149,   149,   296,   266,   298,   278,    43,   333,    44,    45,
     336,   151,   152,   153,   338,   354,    73,    74,    75,   343,
      76,    77,    78,    79,    80,   210,   166,   211,   113,   351,
     162,   163,   195,   312,   355,   167,    83,    84,    85,   217,
     359,   220,   221,   319,    49,   250,    67,   322,   323,   344,
     293,   237,   238,   235,   236,   243,   244,   219,   183,   225,
     230,   251,   253,   305,   254,   256,   257,   308,   258,   262,
     260,   213,   263,   261,   265,   102,   311,   339,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,  -183,   197,
     149,     1,   170,   171,     2,     3,   172,   173,   174,     4,
     267,     5,     6,     7,   175,   176,   177,     8,     9,    10,
      11,    12,   178,    13,    14,    70,    15,   268,   179,   147,
     269,    16,    17,    18,   180,    19,    20,    21,   270,    71,
      72,   276,   277,   284,   285,   281,   290,   295,   304,   306,
     297,   307,   279,   314,   320,   316,   321,   325,    -3,   328,
     332,   352,   181,    74,    75,   337,    76,    77,    78,    79,
      80,   340,   326,   347,    81,   245,   350,     1,   358,   104,
       2,     3,    83,    84,    85,     4,   353,     5,     6,     7,
     246,   287,  -191,     8,     9,    10,    11,    12,   247,    13,
      14,   288,    15,    68,    66,   216,   205,    16,    17,    18,
     303,    19,    20,    21,     1,   170,   171,     2,     3,   172,
     173,   174,     4,   209,     5,     6,     7,   175,   176,   177,
       8,     9,    10,    11,    12,   178,    13,    14,    70,    15,
     309,   179,   224,   105,    16,    17,    18,   180,    19,    20,
      21,    47,    71,    72,     0,  -209,   301,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,   181,    74,    75,     0,    76,
      77,    78,    79,    80,     0,     0,     0,    81,     0,     0,
       1,     0,   104,     2,     3,    83,    84,    85,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,    70,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,     0,    76,    77,    78,    79,    80,
       0,     0,     0,    81,   170,   171,     0,     0,   172,   173,
     174,    83,    84,    85,     0,     0,   175,   176,   177,     0,
       0,     0,     0,     0,   178,     0,     0,    70,     0,     0,
     179,     0,     0,     0,     0,     0,   180,     0,     0,     0,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,    74,    75,     0,    76,    77,
      78,    79,    80,     2,     3,     0,    81,     0,     4,     0,
       5,   104,     7,     0,    83,    84,    85,     9,    10,     0,
      12,     0,    13,    14,    70,     0,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,     0,    76,    77,    78,    79,    80,
       0,     0,     0,    81,     0,     0,     1,     0,     0,     2,
       3,    83,    84,    85,     4,     0,     5,     6,     7,    70,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,     0,    71,    72,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,    73,    74,    75,     0,
      76,    77,    78,    79,    80,    71,    72,   196,    81,     0,
       0,     0,     0,    82,     0,     0,    83,    84,    85,     0,
       0,     0,     0,    70,     0,     0,     0,     0,    73,    74,
      75,     0,    76,    77,    78,    79,    80,    71,    72,     0,
      81,     0,     0,     0,     0,   279,     0,     0,    83,    84,
      85,     0,     0,     0,     0,    70,     0,     0,     0,     0,
      73,    74,    75,     0,    76,    77,    78,    79,    80,    71,
      72,     0,   115,     0,     0,     0,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,    70,     0,     0,
       0,     0,    73,    74,    75,     0,    76,    77,    78,    79,
      80,    71,    72,     0,    81,     0,     0,     0,     0,     0,
       0,     0,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,     0,    76,    77,
      78,    79,   272,     0,     0,     0,    81,     0,     0,     1,
       0,     0,     2,     3,    83,    84,    85,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,    46,     0,     0,
       1,     0,     0,     2,     3,     0,     0,   302,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     0,     9,    10,
       0,    12,     0,    13,    14,     0,     0,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,   110,    70,    71,    72,    81,   127,    89,   221,    23,
     109,   124,    38,    50,    77,   124,    64,     7,   296,     7,
      83,    89,   178,    81,    24,    25,    54,    27,    28,    29,
     168,    72,    58,    23,   312,    23,   174,   113,    28,   115,
      28,   319,   110,   254,   255,    35,    60,    35,    64,     7,
     188,   262,    81,    94,    91,    34,   124,   335,   171,   135,
      94,   339,   171,    64,   342,    23,    82,    82,    83,   151,
     152,   153,    51,    45,    46,    76,   354,    35,   104,   290,
      76,    83,    78,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   127,
     256,    79,    81,   171,   203,    83,   134,   318,   108,    78,
     323,    80,   250,    81,    81,    87,    88,    40,    41,    42,
     148,    64,    72,   261,    93,   336,    78,    77,    80,   340,
     109,    72,   343,    83,   113,   217,   115,   293,    70,    71,
      77,   120,    93,   122,   355,   113,    83,   115,   359,   217,
      43,    44,   120,    76,   122,    78,    78,    80,    80,    27,
      82,    78,   283,    80,    93,    82,   158,   159,   160,   161,
     326,   327,    84,    41,    42,   120,   204,   122,   316,    89,
     248,   249,   258,   197,   260,   213,    25,   325,    27,    28,
     328,    72,    73,    74,   332,   351,    64,    65,    66,   337,
      68,    69,    70,    71,    72,   113,    90,   115,    76,   347,
      47,    48,    77,   289,   352,    49,    84,    85,    86,    77,
     358,    82,    83,   299,   203,    91,   205,    82,    83,   338,
     256,   156,   157,   154,   155,   162,   163,    64,   264,    64,
      64,    94,    94,   271,    92,    76,    64,   275,    76,    92,
      76,    83,    82,    76,    94,   283,   284,   333,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    82,   269,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      77,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    77,    30,    93,
      83,    33,    34,    35,    36,    37,    38,    39,    83,    41,
      42,    77,    77,    83,    77,    79,    92,    94,    64,    79,
      94,    79,    81,    36,    79,    94,    79,    76,    12,    77,
      92,    12,    64,    65,    66,    77,    68,    69,    70,    71,
      72,    77,    94,    94,    76,   164,    77,     3,    77,    81,
       6,     7,    84,    85,    86,    11,    94,    13,    14,    15,
     165,   248,    94,    19,    20,    21,    22,    23,   166,    25,
      26,   249,    28,    53,    50,   122,   109,    33,    34,    35,
     269,    37,    38,    39,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   112,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     279,    30,   129,    57,    33,    34,    35,    36,    37,    38,
      39,    29,    41,    42,    -1,    81,   264,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,
       3,    -1,    81,     6,     7,    84,    85,    86,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    76,     4,     5,    -1,    -1,     8,     9,
      10,    84,    85,    86,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,     6,     7,    -1,    76,    -1,    11,    -1,
      13,    81,    15,    -1,    84,    85,    86,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    76,    -1,    -1,     3,    -1,    -1,     6,
       7,    84,    85,    86,    11,    -1,    13,    14,    15,    27,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    -1,    41,    42,    -1,    33,    34,    35,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    41,    42,    64,    76,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    84,    85,    86,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    41,    42,    -1,
      76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    85,
      86,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    41,
      42,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    41,    42,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    76,    -1,    -1,     3,
      -1,    -1,     6,     7,    84,    85,    86,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    -1,     0,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    51,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   121,   123,   127,   128,   131,   135,   136,   167,
     168,   169,    64,   132,    72,   122,   125,   126,   137,   138,
     143,   123,   124,   124,   124,   124,     0,   168,    81,   135,
     140,   144,    94,    83,    93,   121,   123,   170,   171,    64,
      76,   139,    64,    99,   133,   134,   143,   135,   126,   137,
      27,    41,    42,    64,    65,    66,    68,    69,    70,    71,
      72,    76,    81,    84,    85,    86,    98,   100,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   118,   150,    81,   158,   121,   137,    76,    78,
      93,    82,    83,    76,   103,    76,   103,   103,   118,   120,
     128,   129,   135,   149,    78,    80,   151,   152,   153,   154,
     155,    40,    41,    42,    76,    78,    80,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    93,   117,   103,
     105,    72,    73,    74,    70,    71,    43,    44,    45,    46,
      87,    88,    47,    48,    84,    89,    90,    49,    50,    97,
       4,     5,     8,     9,    10,    16,    17,    18,    24,    30,
      36,    64,   120,   121,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,    77,    64,   123,   142,   145,
     146,   147,   148,    28,   140,   144,   116,   119,    82,   134,
     149,   149,    77,    83,   129,   130,   130,    77,   119,    64,
      82,    83,   150,    93,   155,    64,   101,   102,   118,   120,
      64,   118,   105,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   108,   109,   109,   110,   111,   112,    96,    96,
      91,    94,   119,    94,    92,    96,    76,    64,    76,   163,
      76,    76,    92,    82,    96,    94,   137,    77,    77,    83,
      83,   140,    72,   118,   141,    28,    77,    77,   118,    81,
     105,    79,    82,   152,    83,    77,    79,   113,   114,    96,
      92,   156,   156,   121,   163,    94,   120,    94,   120,    96,
     156,   161,    51,   147,    64,   118,    79,    79,   118,   151,
     150,   118,   120,   156,    36,   163,    94,    97,    77,   120,
      79,    79,    82,    83,    97,    76,    94,    96,    77,   156,
      97,    82,    92,    96,   163,   163,    96,    77,    96,   120,
      77,    97,   156,    96,   116,    97,   156,    94,    97,   156,
      77,    96,    12,    94,   163,    96,    97,   156,    77,    96,
     156
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    98,    98,    98,    98,    98,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   109,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   120,   120,   121,   122,   122,   123,   123,   123,
     123,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   137,   138,   138,   139,   139,   139,   139,   139,   139,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   150,   150,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   155,   156,   156,   156,   156,   156,   156,   157,
     157,   157,   158,   159,   159,   160,   160,   161,   161,   162,
     163,   163,   164,   164,   164,   165,   165,   165,   165,   166,
     166,   166,   166,   167,   167,   168,   168,   169,   170,   170,
     171,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     0,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     4,     1,     9,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     3,     1,     0,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     5,     6,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     0,     1,     3,     5,     6,     6,     5,
       4,     4,     1,     0,     1,     0,     1,     0,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     0,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     1,     0,     1,     3,     1,     1,     2,
       1,     0,    11,     7,     5,     8,    10,    14,     8,     3,
       2,     2,     3,     1,     2,     1,     1,     4,     1,     0,
       1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 50 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
    (yyval.instr) = next_instr;
}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
    (yyval.nextlist) = makelist(next_instr);
    glob_quad.emit(Q_GOTO, -1);
}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 61 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                //Check whether its a function
                                                symdata * check_func = glob_st->search(*(yyvsp[0].idl).name);
                                                if(check_func == NULL)
                                                {
                                                    (yyval.expon).loc  =  curr_st->lookup(*(yyvsp[0].idl).name);
                                                    if((yyval.expon).loc->tp_n != NULL && (yyval.expon).loc->tp_n->basetp == tp_arr)
                                                    {
                                                        //If array
                                                        (yyval.expon).arr = (yyval.expon).loc;
                                                        (yyval.expon).loc = curr_st->gentemp(new type_n(tp_int));
                                                        (yyval.expon).loc->i_val.int_val = 0;
                                                        (yyval.expon).loc->isInitialized = true;
                                                        glob_quad.emit(Q_ASSIGN,0,(yyval.expon).loc->name);
                                                        (yyval.expon).type = (yyval.expon).arr->tp_n;
                                                    }
                                                    else
                                                    {
                                                        // If not an array
                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                        (yyval.expon).arr = NULL;
                                                        (yyval.expon).isPointer = false;
                                                    }
                                                }
                                                else
                                                {
                                                    // It is a function
                                                    (yyval.expon).loc = check_func;
                                                    (yyval.expon).type = check_func->tp_n;
                                                    (yyval.expon).arr = NULL;
                                                    (yyval.expon).isPointer = false;
                                                }
                                            }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 94 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    // Declare and initialize the value of the temporary variable with the integer
                                                    (yyval.expon).loc  = curr_st->gentemp(new type_n(tp_int));
                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                    (yyval.expon).loc->i_val.int_val = (yyvsp[0].intval);
                                                    (yyval.expon).loc->isInitialized = true;
                                                    (yyval.expon).arr = NULL;
                                                    glob_quad.emit(Q_ASSIGN, (yyvsp[0].intval), (yyval.expon).loc->name);
                                                }
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 103 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    // Declare and initialize the value of the temporary variable with the floatval
                                                    (yyval.expon).loc  = curr_st->gentemp(new type_n(tp_double));
                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                    (yyval.expon).loc->i_val.double_val = (yyvsp[0].floatval);
                                                    (yyval.expon).loc->isInitialized = true;
                                                    (yyval.expon).arr = NULL;
                                                    glob_quad.emit(Q_ASSIGN, (yyvsp[0].floatval), (yyval.expon).loc->name);
                                                  }
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 112 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                // Declare and initialize the value of the temporary variable with the character
                                                (yyval.expon).loc  = curr_st->gentemp(new type_n(tp_char));
                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                (yyval.expon).loc->i_val.char_val = (yyvsp[0].charval);
                                                (yyval.expon).loc->isInitialized = true;
                                                (yyval.expon).arr = NULL;
                                                glob_quad.emit(Q_ASSIGN, (yyvsp[0].charval), (yyval.expon).loc->name);
                                            }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 121 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 122 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[-1].expon);
                                                   }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 126 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                         (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 131 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                        //Explanation of Array handling
                                        
                                                                        (yyval.expon).loc = curr_st->gentemp(new type_n(tp_int));
                                                                        
                                                                        symdata* temporary = curr_st->gentemp(new type_n(tp_int));
                                                                        
                                                                        char temp[10];
                                                                        
                                                                        sprintf(temp,"%d",(yyvsp[-3].expon).type->next->getSize());
                                                                        
                                                                        glob_quad.emit(Q_MULT,(yyvsp[-1].expon).loc->name,temp,temporary->name);
                                                                        glob_quad.emit(Q_PLUS,(yyvsp[-3].expon).loc->name,temporary->name,(yyval.expon).loc->name);
                                                                        
                                                                        // the new size will be calculated and the temporary variable storing the size will be passed on a $$.loc
                                                                        
                                                                        //$$.arr <= base pointer
                                                                        (yyval.expon).arr = (yyvsp[-3].expon).arr;
                                                                        
                                                                        //$$.type <= basetp(arr)
                                                                        (yyval.expon).type = (yyvsp[-3].expon).type->next;

                                                                        //$$.arr->tp_n has the full type of the arr which will be used for size calculations
                                                                     }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 155 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                            //Explanation of Function Handling
                                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-3].expon).type));
                                                                                            //temporary is created 
                                                                                            char str[10];
                                                                                            if((yyvsp[-1].argsl).arguments == NULL)
                                                                                            {
                                                                                                //No function Parameters
                                                                                                sprintf(str,"0");
                                                                                                glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,str,(yyval.expon).loc->name);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                for(int i=0;i<(yyvsp[-1].argsl).arguments->size();i++)
                                                                                                {
                                                                                                    // To print the parameters 
                                                                                                    glob_quad.emit(Q_PARAM,(*(yyvsp[-1].argsl).arguments)[i]->loc->name);
                                                                    
                                                                                                }
                                                                                                sprintf(str,"%ld",(yyvsp[-1].argsl).arguments->size());
                                                                                                glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,str,(yyval.expon).loc->name);
                                                                                            }

                                                                                            (yyval.expon).arr = NULL;
                                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                         }
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 181 "ass4_15CS30015.y" /* yacc.c:1646  */
    {/*Struct Logic to be Skipped*/}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 182 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                            /*----*/
                                                                      }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
                                                                if((yyvsp[-1].expon).arr != NULL)
                                                                {
                                                                    // Post increment of an array element
                                                                    symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,temp_elem->name);
                                                                    glob_quad.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[-1].expon).loc->name,temp_elem->name,(yyvsp[-1].expon).arr->name);
                                                                    (yyval.expon).arr = NULL;
                                                                }
                                                                else
                                                                {
                                                                    //post increment of an simple element
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
                                                                    glob_quad.emit(Q_PLUS,(yyvsp[-1].expon).loc->name,"1",(yyvsp[-1].expon).loc->name);    
                                                                }
                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;                                 
                                                             }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 205 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
                                                                if((yyvsp[-1].expon).arr != NULL)
                                                                {
                                                                    // Post decrement of an array element
                                                                    symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,temp_elem->name);
                                                                    glob_quad.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[-1].expon).loc->name,temp_elem->name,(yyvsp[-1].expon).arr->name);
                                                                    (yyval.expon).arr = NULL;
                                                                }
                                                                else
                                                                {
                                                                    //post decrement of an simple element
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
                                                                    glob_quad.emit(Q_MINUS,(yyvsp[-1].expon).loc->name,"1",(yyvsp[-1].expon).loc->name);
                                                                }
                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                              }
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 225 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                /*------*/
                                                                           }
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 228 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                    /*------*/
                                                                               }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 232 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.argsl).arguments = new vector<expresn*>;
                                                        expresn * tex = new expresn((yyvsp[0].expon));
                                                        (yyval.argsl).arguments->push_back(tex);
                                                     }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 237 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        expresn * tex = new expresn((yyvsp[0].expon));
                                                                                        (yyval.argsl).arguments->push_back(tex);
                                                                                    }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 242 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.argsl) = (yyvsp[0].argsl);
                                                          }
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 245 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.argsl).arguments = NULL;
                                            }
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                   }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 252 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).type);
                                                                if((yyvsp[0].expon).arr != NULL)
                                                                {
                                                                    // pre increment of an Array element 
                                                                    symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,temp_elem->name);
                                                                    glob_quad.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[0].expon).loc->name,temp_elem->name,(yyvsp[0].expon).arr->name);
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                    (yyval.expon).arr = NULL;
                                                                }
                                                                else
                                                                {
                                                                    // pre increment
                                                                    glob_quad.emit(Q_PLUS,(yyvsp[0].expon).loc->name,"1",(yyvsp[0].expon).loc->name);
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                }
                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                            }
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 272 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                if((yyvsp[0].expon).arr != NULL)
                                                                {
                                                                    //pre decrement of  Array Element 
                                                                    symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,temp_elem->name);
                                                                    glob_quad.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[0].expon).loc->name,temp_elem->name,(yyvsp[0].expon).arr->name);
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                    (yyval.expon).arr = NULL;
                                                                }
                                                                else
                                                                {
                                                                    // pre decrement
                                                                    glob_quad.emit(Q_MINUS,(yyvsp[0].expon).loc->name,"1",(yyvsp[0].expon).loc->name);
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                }
                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                            }
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 293 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                    type_n * temp_type;
                                                                    switch((yyvsp[-1].charval))
                                                                    {
                                                                        case '&':
                                                                            //create a temporary type store the type
                                                                            temp_type = new type_n(tp_ptr,1,(yyvsp[0].expon).type);
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType(temp_type));
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            glob_quad.emit(Q_ADDR,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            (yyval.expon).arr = NULL;
                                                                            break;
                                                                        case '*':
                                                                            (yyval.expon).isPointer = true;
                                                                            (yyval.expon).type = (yyvsp[0].expon).loc->tp_n->next;
                                                                            (yyval.expon).loc = (yyvsp[0].expon).loc;
                                                                            (yyval.expon).arr = NULL;
                                                                            break;
                                                                        case '+':
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            break;
                                                                        case '-':
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            glob_quad.emit(Q_UNARY_MINUS,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            break;
                                                                        case '~':
                                                                            /*Bitwise Not to be implemented Later on*/
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            glob_quad.emit(Q_NOT,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            break;
                                                                        case '!':
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            (yyval.expon).truelist = (yyvsp[0].expon).falselist;
                                                                            (yyval.expon).falselist = (yyvsp[0].expon).truelist;
                                                                            break;
                                                                        default:
                                                                            break;
                                                                    }
                                                                }
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 337 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 338 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 340 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '&';
                                    }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 343 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '*';
                                    }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 346 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '+';
                                    }
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 349 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '-';
                                    }
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 352 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '~';
                                    }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 355 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        (yyval.charval) = '!';
                                    }
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 359 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    if((yyvsp[0].expon).arr != NULL && (yyvsp[0].expon).arr->tp_n != NULL)
                                                    {
                                                        //Right Indexing of an array element as unary expression is converted into cast expression
                                                        (yyval.expon).loc = curr_st->gentemp(new type_n((yyvsp[0].expon).type->basetp));
                                                        glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                        (yyval.expon).arr = NULL;
                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                    }
                                                    else if((yyvsp[0].expon).isPointer == true)
                                                    {
                                                        //RDereferencing as its a pointer
                                                        (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                        (yyval.expon).isPointer = false;
                                                        glob_quad.emit(Q_RDEREF,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                    }
                                                    else
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                }
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 378 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                    /*--------*/
                                                                 }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 382 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 385 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                    typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    glob_quad.emit(Q_MULT,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                              }
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 391 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                    typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    glob_quad.emit(Q_DIVIDE,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                              }
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 397 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                    typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    glob_quad.emit(Q_MODULO,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                             }
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 404 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                (yyval.expon) = (yyvsp[0].expon);
                                                          }
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 407 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                        glob_quad.emit(Q_PLUS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                  }
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 413 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                        glob_quad.emit(Q_MINUS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                  }
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 420 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 423 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    glob_quad.emit(Q_LEFT_OP,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                }
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 428 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    glob_quad.emit(Q_RIGHT_OP,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                }
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 434 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                 }
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 437 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                (yyval.expon).type = new type_n(tp_bool);
                                                                                (yyval.expon).truelist = makelist(next_instr);
                                                                                (yyval.expon).falselist = makelist(next_instr+1);
                                                                                glob_quad.emit(Q_IF_LESS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                glob_quad.emit(Q_GOTO,"-1");
                                                                           }
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 445 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                (yyval.expon).type = new type_n(tp_bool);
                                                                                (yyval.expon).truelist = makelist(next_instr);
                                                                                (yyval.expon).falselist = makelist(next_instr+1);
                                                                                glob_quad.emit(Q_IF_GREATER,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                glob_quad.emit(Q_GOTO,"-1");
                                                                           }
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 453 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        (yyval.expon).type = new type_n(tp_bool);
                                                                                        (yyval.expon).truelist = makelist(next_instr);
                                                                                        (yyval.expon).falselist = makelist(next_instr+1);
                                                                                        glob_quad.emit(Q_IF_LESS_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                                    }
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 461 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                            typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                            (yyval.expon).type = new type_n(tp_bool);
                                                                                            (yyval.expon).truelist = makelist(next_instr);
                                                                                            (yyval.expon).falselist = makelist(next_instr+1);
                                                                                            glob_quad.emit(Q_IF_GREATER_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                      }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 470 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                      }
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 473 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        (yyval.expon).type = new type_n(tp_bool);
                                                                                        (yyval.expon).truelist = makelist(next_instr);
                                                                                        (yyval.expon).falselist = makelist(next_instr+1);
                                                                                        glob_quad.emit(Q_IF_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                                 }
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 481 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                            typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                            (yyval.expon).type = new type_n(tp_bool);
                                                                                            (yyval.expon).truelist = makelist(next_instr);
                                                                                            (yyval.expon).falselist = makelist(next_instr+1);
                                                                                            glob_quad.emit(Q_IF_NOT_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                     }
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 490 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 493 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            glob_quad.emit(Q_LOG_AND,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                        }
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 499 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                               }
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 502 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                glob_quad.emit(Q_XOR,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                           }
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 508 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 511 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                        glob_quad.emit(Q_LOG_OR,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    }
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 517 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 520 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        if((yyvsp[-3].expon).type->basetp != tp_bool)
                                                                                            conv2Bool(&(yyvsp[-3].expon));
                                                                                        if((yyvsp[0].expon).type->basetp != tp_bool)
                                                                                            conv2Bool(&(yyvsp[0].expon));
                                                                                        backpatch((yyvsp[-3].expon).truelist,(yyvsp[-1].instr));
                                                                                        (yyval.expon).type = new type_n(tp_bool);
                                                                                        (yyval.expon).falselist = merge((yyvsp[-3].expon).falselist,(yyvsp[0].expon).falselist);
                                                                                        (yyval.expon).truelist = (yyvsp[0].expon).truelist;
                                                                                    }
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 531 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                       }
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 534 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        if((yyvsp[-3].expon).type->basetp != tp_bool)
                                                                                            conv2Bool(&(yyvsp[-3].expon));
                                                                                        if((yyvsp[0].expon).type->basetp != tp_bool)
                                                                                            conv2Bool(&(yyvsp[0].expon)); 
                                                                                        backpatch((yyvsp[-3].expon).falselist,(yyvsp[-1].instr));
                                                                                        (yyval.expon).type = new type_n(tp_bool);
                                                                                        (yyval.expon).truelist = merge((yyvsp[-3].expon).truelist,(yyvsp[0].expon).truelist);
                                                                                        (yyval.expon).falselist = (yyvsp[0].expon).falselist;
                                                                                    }
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 546 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                      }
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 549 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[-4].expon).type);
                                                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                                            list* TEMP_LIST = makelist(next_instr);
                                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                                            backpatch((yyvsp[-3].nextlist),next_instr);
                                                                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[-4].expon).loc->name,(yyval.expon).loc->name);
                                                                                                            TEMP_LIST = merge(TEMP_LIST,makelist(next_instr));
                                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                                            backpatch((yyvsp[-7].nextlist),next_instr);
                                                                                                            conv2Bool(&(yyvsp[-8].expon));
                                                                                                            backpatch((yyvsp[-8].expon).truelist,(yyvsp[-5].instr));
                                                                                                            backpatch((yyvsp[-8].expon).falselist,(yyvsp[-1].instr));
                                                                                                            backpatch(TEMP_LIST,next_instr);
                                                                                                        }
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 578 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 581 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                                //LDereferencing
                                                                                                if((yyvsp[-2].expon).isPointer)
                                                                                                {
                                                                                                    glob_quad.emit(Q_LDEREF,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
                                                                                                }
                                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon),true);
                                                                                                if((yyvsp[-2].expon).arr != NULL)
                                                                                                {
                                                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).arr->name);
                                                                                                }
                                                                                                else if(!(yyvsp[-2].expon).isPointer)
                                                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
                                                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).type);
                                                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                                glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                            }
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 600 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                       }
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 604 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                      }
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 607 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                        (yyval.expon) = (yyvsp[0].expon);
                                                                     }
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 613 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                        if((yyvsp[-1].expon).loc != NULL && (yyvsp[-1].expon).type != NULL && (yyvsp[-1].expon).type->basetp == tp_func)
                                                                                        {
                                                                                            /*Delete curr_st*/
                                                                                            curr_st = new symtab();
                                                                                        }
                                                                                    }
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 621 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
                                                        {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
                                                     }
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 627 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.expon).loc = NULL;
                                            }
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 631 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 633 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 634 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 639 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    /*Expecting only function declaration*/
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                }
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 645 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                /*Nothing to be done here*/
                                                if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
                                                {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                }
                                            }
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 652 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                //initializations of declarators
                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon),true);
                                                                glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
                                                            }
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 658 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 659 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 660 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 661 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 663 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        glob_type = new type_n(tp_void);
                                    }
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 666 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        glob_type = new type_n(tp_char);
                                    }
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 669 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 670 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                        glob_type = new type_n(tp_int);
                                    }
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 673 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 674 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 675 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                            glob_type = new type_n(tp_double);
                                        }
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 678 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 679 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 680 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 681 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 682 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 683 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 685 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                /*----------*/
                                                                            }
#line 2857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 688 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 690 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 691 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 693 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 694 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 695 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 697 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.expon).loc  = curr_st->lookup(*(yyvsp[0].idl).name);
                                                (yyval.expon).type = new type_n(glob_type->basetp);
                                            }
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 701 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 703 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 704 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 706 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 707 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 709 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 710 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 711 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 713 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 715 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                if((yyvsp[-1].decl).type == NULL)
                                                                {
                                                                    /*--------------*/
                                                                }
                                                                else
                                                                {
                                                                    if((yyvsp[0].expon).loc->tp_n->basetp != tp_ptr)
                                                                    {
                                                                        type_n * test = (yyvsp[-1].decl).type;
                                                                        while(test->next != NULL)
                                                                        {
                                                                            test = test->next;
                                                                        }
                                                                        test->next = (yyvsp[0].expon).loc->tp_n;
                                                                        (yyvsp[0].expon).loc->tp_n = (yyvsp[-1].decl).type;
                                                                    }
                                                                }

                                                                if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
                                                                {
                                                                    (yyval.expon) = (yyvsp[0].expon);
                                                                }
                                                                else
                                                                {
                                                                    //its not a function
                                                                    (yyvsp[0].expon).loc->size = (yyvsp[0].expon).loc->tp_n->getSize();
                                                                    (yyvsp[0].expon).loc->offset = curr_st->offset;
                                                                    curr_st->offset += (yyvsp[0].expon).loc->size;
                                                                    (yyval.expon) = (yyvsp[0].expon);
                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                }
                                                            }
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 749 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                            (yyval.decl) = (yyvsp[0].decl);
                                        }
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 752 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.decl).type = NULL;
                                            }
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 756 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    (yyval.expon).loc = curr_st->lookup(*(yyvsp[0].idl).name);
                                                    //printf("Hello5\n");
                                                    if((yyval.expon).loc->var_type == "")
                                                    {
                                                        //Type initialization
                                                        (yyval.expon).loc->var_type = "local";
                                                        (yyval.expon).loc->tp_n = new type_n(glob_type->basetp);
                                                    }
                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                            }
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 767 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[-1].expon);
                                                    }
#line 3034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 770 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                                        
                                                                                                                if((yyvsp[-4].expon).type->basetp == tp_arr)
                                                                                                                {
                                                                                                                    /*if type is already an arr*/
                                                                                                                    type_n * typ1 = (yyvsp[-4].expon).type,*typ = (yyvsp[-4].expon).type;
                                                                                                                    typ1 = typ1->next;
                                                                                                                    while(typ1->next != NULL)
                                                                                                                    {
                                                                                                                        typ1 = typ1->next;
                                                                                                                        typ = typ->next;
                                                                                                                    }
                                                                                                                    typ->next = new type_n(tp_arr,(yyvsp[-1].expon).loc->i_val.int_val,typ1);
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    //add the type of array to list
                                                                                                                    if((yyvsp[-1].expon).loc == NULL)
                                                                                                                        (yyvsp[-4].expon).type = new type_n(tp_arr,-1,(yyvsp[-4].expon).type);
                                                                                                                    else
                                                                                                                        (yyvsp[-4].expon).type = new type_n(tp_arr,(yyvsp[-1].expon).loc->i_val.int_val,(yyvsp[-4].expon).type);
                                                                                                                }
                                                                                                                (yyval.expon) = (yyvsp[-4].expon);
                                                                                                                (yyval.expon).loc->tp_n = (yyval.expon).type;
                                                                                                            }
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 795 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 796 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 797 "ass4_15CS30015.y" /* yacc.c:1646  */
    {/*Not sure but mostly we don't have to implement this*/}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 798 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                    symdata * new_func = glob_st->search(curr_st->symbol_tab[0]->name);
                                                                                    //printf("Hello1\n");
                                                                                    if(new_func == NULL)
                                                                                    {
                                                                                        new_func = glob_st->lookup(curr_st->symbol_tab[0]->name);
                                                                                        (yyval.expon).loc = curr_st->symbol_tab[0];
                                                                                        if(new_func->var_type == "")
                                                                                        {
                                                                                            // Declaration of the function for the first time
                                                                                            new_func->tp_n = CopyType(curr_st->symbol_tab[0]->tp_n);
                                                                                            new_func->var_type = "func";
                                                                                            new_func->isInitialized = false;
                                                                                            new_func->nest_tab = curr_st;
                                                                                            curr_st->name = curr_st->symbol_tab[0]->name;
                                                                                            //curr_st->symbol_tab[0]->name = "retVal";
                                                                                            curr_st->symbol_tab[0]->var_type = "return";
                                                                                            curr_st->symbol_tab[0]->size = curr_st->symbol_tab[0]->tp_n->getSize();
                                                                                            curr_st->symbol_tab[0]->offset = 0;
                                                                                            curr_st->offset = curr_st->symbol_tab[0]->size;
                                                                                            for(int i=1;i<curr_st->symbol_tab.size();i++)
                                                                                            {
                                                                                                curr_st->symbol_tab[i]->var_type = "param";
                                                                                                curr_st->symbol_tab[i]->offset += curr_st->symbol_tab[0]->size;
                                                                                                curr_st->offset += curr_st->symbol_tab[i]->size;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        curr_st = new_func->nest_tab;
                                                                                    }
                                                                                    (yyval.expon).loc = new_func;
                                                                                    (yyval.expon).type = new type_n(tp_func);
                                                                                }
#line 3122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 833 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                symdata * new_func = glob_st->search(curr_st->symbol_tab[0]->name);
                                                                                //printf("Hello3\n");
                                                                                if(new_func == NULL)
                                                                                {
                                                                                    new_func = glob_st->lookup(curr_st->symbol_tab[0]->name);
                                                                                    (yyval.expon).loc = curr_st->symbol_tab[0];
                                                                                    if(new_func->var_type == "")
                                                                                    {
                                                                                        /*Function is being declared here for the first time*/
                                                                                        new_func->tp_n = CopyType(curr_st->symbol_tab[0]->tp_n);
                                                                                        new_func->var_type = "func";
                                                                                        new_func->isInitialized = false;
                                                                                        new_func->nest_tab = curr_st;
                                                                                        /*Change the first element to retval and change the rest to param*/
                                                                                        curr_st->name = curr_st->symbol_tab[0]->name;
                                                                                        //curr_st->symbol_tab[0]->name = "retVal";
                                                                                        curr_st->symbol_tab[0]->var_type = "return";
                                                                                        curr_st->symbol_tab[0]->size = curr_st->symbol_tab[0]->tp_n->getSize();
                                                                                        curr_st->symbol_tab[0]->offset = 0;
                                                                                        curr_st->offset = curr_st->symbol_tab[0]->size;
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    // Already declared function. Therefore drop the new table and connect current symbol table pointer to the previously created funciton symbol table
                                                                                    curr_st = new_func->nest_tab;
                                                                                }
                                                                                (yyval.expon).loc = new_func;
                                                                                (yyval.expon).type = new type_n(tp_func);
                                                                            }
#line 3158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 865 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 866 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 868 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 871 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.expon).loc = NULL;
                                            }
#line 3186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 878 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                (yyval.decl).type = new type_n(tp_ptr);
                                                            }
#line 3194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 881 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                        (yyval.decl).type = new type_n(tp_ptr,1,(yyvsp[0].decl).type);
                                                                    }
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 885 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 886 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 888 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    /*-------*/
                                                }
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 891 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 893 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                            /*---------*/
                                                        }
#line 3236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 896 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                            /*------------*/
                                                                        }
#line 3244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 900 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                        /*The parameter is already added to the current Symbol Table*/
                                                                  }
#line 3252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 903 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 910 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                    (yyval.expon) = (yyvsp[0].expon);
                                }
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 913 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 914 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 928 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 931 "ass4_15CS30015.y" /* yacc.c:1646  */
    {/*Switch Case*/}
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 932 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                    }
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 935 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.nextlist) = NULL;
                                                    }
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 938 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                    }
#line 3314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 941 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                    }
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 944 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                }
#line 3330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 948 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 949 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 950 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 952 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                (yyval.nextlist) = (yyvsp[-1].nextlist);
                                                            }
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 956 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                }
#line 3364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 959 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.nextlist) = NULL;
                                            }
#line 3372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 963 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.nextlist) = (yyvsp[0].nextlist);
                                            }
#line 3380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 966 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                    backpatch((yyvsp[-2].nextlist),(yyvsp[-1].instr));
                                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                             }
#line 3389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 971 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.nextlist) = NULL;
                                            }
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 974 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.nextlist) = (yyvsp[0].nextlist);
                                          }
#line 3405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 978 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                        (yyval.expon) = (yyvsp[-1].expon);
                                                  }
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 982 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                (yyval.expon) = (yyvsp[0].expon);
                                           }
#line 3421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 985 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                /*Initialize Expression to NULL*/
                                                (yyval.expon).loc = NULL;
                                            }
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 990 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                            /*N1 is used for falselist of expression, M1 is used for truelist of expression, N2 is used to prevent fall through, M2 is used for falselist of expression*/
                                                                                            (yyvsp[-4].nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[-3].nextlist));
                                                                                            (yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(next_instr));
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                            backpatch((yyvsp[-7].nextlist),next_instr);

                                                                                            conv2Bool(&(yyvsp[-8].expon));

                                                                                            backpatch((yyvsp[-8].expon).truelist,(yyvsp[-5].instr));
                                                                                            backpatch((yyvsp[-8].expon).falselist,(yyvsp[-1].instr));
                                                                                            (yyval.nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[0].nextlist));
                                                                                        }
#line 3448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1003 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                        /*N is used for the falselist of expression to skip the block and M is used for truelist of expression*/
                                                                        (yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(next_instr));
                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                        backpatch((yyvsp[-3].nextlist),next_instr);
                                                                        conv2Bool(&(yyvsp[-4].expon));
                                                                        backpatch((yyvsp[-4].expon).truelist,(yyvsp[-1].instr));
                                                                        (yyval.nextlist) = merge((yyvsp[0].nextlist),(yyvsp[-4].expon).falselist);
                                                                    }
#line 3462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1012 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1014 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                            /*The first 'M' takes into consideration that the control will come again at the beginning of the condition checking.'N' here does the work of breaking condition i.e. it generate goto which wii be useful when we are exiting from while loop. Finally, the last 'M' is here to note the startinf statement that will be executed in every loop to populate the truelists of expression*/
                                                                            glob_quad.emit(Q_GOTO,(yyvsp[-5].instr));
                                                                            backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr));           /*S.nextlist to M1.instr*/
                                                                            backpatch((yyvsp[-3].nextlist),next_instr);    /*N1.nextlist to next_instr*/
                                                                            conv2Bool(&(yyvsp[-4].expon));
                                                                            backpatch((yyvsp[-4].expon).truelist,(yyvsp[-1].instr));
                                                                            (yyval.nextlist) = (yyvsp[-4].expon).falselist;
                                                                        }
#line 3482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1023 "ass4_15CS30015.y" /* yacc.c:1646  */
    {  
                                                                                    /*M1 is used for coming back again to the statement as it stores the instruction which will be needed by the truelist of expression. M2 is neede as we have to again to check the condition which will be used to populate the nextlist of statements. Further N is used to prevent from fall through*/
                                                                                    backpatch((yyvsp[-2].nextlist),next_instr);
                                                                                    backpatch((yyvsp[-7].nextlist),(yyvsp[-4].instr));           /*S1.nextlist to M2.instr*/
                                                                                    conv2Bool(&(yyvsp[-3].expon));
                                                                                    backpatch((yyvsp[-3].expon).truelist,(yyvsp[-8].instr));  /*B.truelist to M1.instr*/
                                                                                    (yyval.nextlist) = (yyvsp[-3].expon).falselist;
                                                                                }
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1031 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                                                       /*M1 is used for coming back to check the epression at every iteration. N1 is used  for generating the goto which will be used for exit conditions. M2 is used for nextlist of statement and N2 is used for jump to check the expression and M3 is used for the truelist of expression*/
                                                                                                                        backpatch((yyvsp[-3].nextlist),(yyvsp[-9].instr));          /*N2.nextlist to M1.instr*/
                                                                                                                        backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr));          /*S.nextlist to M2.instr*/
                                                                                                                        glob_quad.emit(Q_GOTO,(yyvsp[-5].instr));
                                                                                                                        backpatch((yyvsp[-7].nextlist),next_instr);    /*N1.nextlist to next_instr*/
                                                                                                                        conv2Bool(&(yyvsp[-8].expon));
                                                                                                                        backpatch((yyvsp[-8].expon).truelist,(yyvsp[-1].instr));
                                                                                                                        (yyval.nextlist) = (yyvsp[-8].expon).falselist;
                                                                                                                    }
#line 3510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1041 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1043 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1044 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1045 "ass4_15CS30015.y" /* yacc.c:1646  */
    {}
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1046 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                if((yyvsp[-1].expon).loc == NULL)
                                                                    glob_quad.emit(Q_RETURN);
                                                                else
                                                                {
                                                                    expresn * dummy = new expresn();
                                                                    dummy->loc = curr_st->symbol_tab[0];
                                                                    dummy->type = dummy->loc->tp_n;
                                                                    typecheck(dummy,&(yyvsp[-1].expon),true);
                                                                    delete dummy;
                                                                    glob_quad.emit(Q_RETURN,(yyvsp[-1].expon).loc->name);
                                                                }
                                                          }
#line 3552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1067 "ass4_15CS30015.y" /* yacc.c:1646  */
    {
                                                                                                    symdata * func = glob_st->lookup((yyvsp[-2].expon).loc->name);
                                                                                                    //printf("Hello2\n");
                                                                                                    func->nest_tab->symbol_tab[0]->tp_n = CopyType(func->tp_n);
                                                                                                    func->nest_tab->symbol_tab[0]->name = "retVal";
                                                                                                    func->nest_tab->symbol_tab[0]->offset = 0;
                                                                                                    //If return type is pointer then change the offset
                                                                                                    if(func->nest_tab->symbol_tab[0]->tp_n->basetp == tp_ptr)
                                                                                                    {
                                                                                                        int diff = size_pointer - func->nest_tab->symbol_tab[0]->size;
                                                                                                        func->nest_tab->symbol_tab[0]->size = size_pointer;
                                                                                                        for(int i=1;i<func->nest_tab->symbol_tab.size();i++)
                                                                                                        {
                                                                                                            func->nest_tab->symbol_tab[i]->offset += diff;
                                                                                                        }
                                                                                                    }
                                                                                                    int offset_size = 0;
                                                                                                    for(int i=0;i<func->nest_tab->symbol_tab.size();i++)
                                                                                                    {
                                                                                                        offset_size += func->nest_tab->symbol_tab[i]->size;
                                                                                                    }
                                                                                                    //Create a new Current Symbol Table
                                                                                                    curr_st = new symtab();
                                                                                                }
#line 3581 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3585 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1098 "ass4_15CS30015.y" /* yacc.c:1906  */

void yyerror(const char*s)
{
    printf("%s",s);
}
