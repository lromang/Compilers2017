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
#line 11 "parser.y" /* yacc.c:339  */


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"

void yyerror(char *msg); // standard error-handling routine


#line 82 "y.tab.c" /* yacc.c:339  */

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
    T_Void = 258,
    T_Bool = 259,
    T_Int = 260,
    T_Double = 261,
    T_String = 262,
    T_Class = 263,
    T_LessEqual = 264,
    T_GreaterEqual = 265,
    T_Equal = 266,
    T_NotEqual = 267,
    T_Dims = 268,
    T_And = 269,
    T_Or = 270,
    T_Null = 271,
    T_Extends = 272,
    T_This = 273,
    T_Interface = 274,
    T_Implements = 275,
    T_While = 276,
    T_For = 277,
    T_If = 278,
    T_Else = 279,
    T_Return = 280,
    T_Break = 281,
    T_New = 282,
    T_NewArray = 283,
    T_Print = 284,
    T_ReadInteger = 285,
    T_ReadLine = 286,
    T_Identifier = 287,
    T_StringConstant = 288,
    T_IntConstant = 289,
    T_DoubleConstant = 290,
    T_BoolConstant = 291,
    T_UnaryMinus = 292,
    T_NElse = 293
  };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Double 261
#define T_String 262
#define T_Class 263
#define T_LessEqual 264
#define T_GreaterEqual 265
#define T_Equal 266
#define T_NotEqual 267
#define T_Dims 268
#define T_And 269
#define T_Or 270
#define T_Null 271
#define T_Extends 272
#define T_This 273
#define T_Interface 274
#define T_Implements 275
#define T_While 276
#define T_For 277
#define T_If 278
#define T_Else 279
#define T_Return 280
#define T_Break 281
#define T_New 282
#define T_NewArray 283
#define T_Print 284
#define T_ReadInteger 285
#define T_ReadLine 286
#define T_Identifier 287
#define T_StringConstant 288
#define T_IntConstant 289
#define T_DoubleConstant 290
#define T_BoolConstant 291
#define T_UnaryMinus 292
#define T_NElse 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 41 "parser.y" /* yacc.c:355  */

    int integerConstant;
    bool boolConstant;
    char *stringConstant;
    double doubleConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
    Decl *decl;
    List<Decl*> *declList;

#line 208 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 239 "y.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   892

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,     2,     2,    44,     2,     2,
      51,    52,    42,    40,    53,    41,    48,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      38,    37,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      35,    36,    46,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   117,   118,   121,   122,   123,   124,   128,
     131,   134,   135,   136,   137,   138,   139,   142,   143,   146,
     147,   150,   151,   154,   155,   156,   157,   160,   161,   164,
     164,   167,   168,   171,   174,   175,   178,   179,   182,   183,
     184,   185,   188,   189,   192,   193,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   207,   208,   211,   214,   215,
     216,   217,   220,   221,   224,   227,   230,   231,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   261,   262,   263,   266,   267,   270,   271,
     274,   275,   276,   277,   278
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Double",
  "T_String", "T_Class", "T_LessEqual", "T_GreaterEqual", "T_Equal",
  "T_NotEqual", "T_Dims", "T_And", "T_Or", "T_Null", "T_Extends", "T_This",
  "T_Interface", "T_Implements", "T_While", "T_For", "T_If", "T_Else",
  "T_Return", "T_Break", "T_New", "T_NewArray", "T_Print", "T_ReadInteger",
  "T_ReadLine", "T_Identifier", "T_StringConstant", "T_IntConstant",
  "T_DoubleConstant", "T_BoolConstant", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'!'", "T_UnaryMinus", "'['", "'.'", "T_NElse",
  "';'", "'('", "')'", "','", "'{'", "'}'", "']'", "$accept", "Program",
  "DeclList", "Decl", "VariableDecl", "Variable", "Type", "FunctionDecl",
  "Formals", "VarList", "ClassDecl", "FieldList", "Field", "IdentList",
  "InterfaceDecl", "PrototypeList", "Prototype", "StmtBlock",
  "VariableDeclList", "StmtList", "Stmt", "IfStmt", "WhileStmt", "ForStmt",
  "ReturnStmt", "BreakStmt", "PrintStmt", "ExprList", "Expr", "LValue",
  "Call", "Actuals", "Constant", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    61,    60,    62,
      43,    45,    42,    47,    37,    33,   292,    91,    46,   293,
      59,    40,    41,    44,   123,   125,    93
};
# endif

#define YYPACT_NINF -92

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define YYTABLE_NINF -16

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-16)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     338,   -14,   -92,   -92,   -92,   -92,    -7,     2,   -92,    14,
     338,   -92,   -92,   -29,     4,   -92,   -92,   -92,   -24,    -5,
       7,   -92,   -92,   -92,   -92,    38,   134,    26,    47,   -92,
     -92,   134,   -92,    28,    40,    43,   -11,   -92,    -6,    25,
      95,    61,   -92,    62,   134,    47,   -92,    85,   -92,   -92,
     -92,   -92,   -92,    87,   -92,    82,   -92,    62,   152,   -92,
     -92,    -3,   100,   -92,   105,    69,    73,   -92,   -92,   -92,
      74,    79,    80,   789,     5,    83,    84,    98,   101,   102,
       3,   -92,   -92,   -92,   -92,   841,   841,   -92,   841,   -92,
     -92,   -92,   194,   542,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   399,    99,   -92,   -92,   -92,   -92,   -92,   134,   134,
     841,   815,   841,   103,   -92,   441,   -92,   119,   841,   841,
     109,   110,   841,    37,    37,   262,   -92,   -92,   582,   -92,
     -92,   841,   841,   841,   841,   841,   841,   841,   841,   841,
     841,   841,   841,   841,   841,   131,   -92,   841,   140,   112,
     113,   281,   841,   454,   325,   -92,   115,   241,    35,   610,
     -92,   -92,   116,   124,   -92,   -92,   665,   665,   676,   676,
     650,   629,   665,   665,   199,   199,    37,    37,    37,   222,
     120,   610,   -92,   139,   141,   709,   496,   841,   709,   -92,
     134,   142,   841,   -92,   -92,   841,   -92,   -92,   -92,   737,
     509,   170,   -10,   -92,   610,   144,   709,   340,   763,   709,
     -92,   -92,   -92,   709,   709,   384,   -92,   -92,   -92,   709,
     -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    14,    11,    12,    13,     0,     0,    15,     0,
       2,     4,     5,     0,     0,     8,     6,     7,     0,     0,
       0,     1,     3,     9,    16,    10,    20,     0,     0,    28,
      35,    20,    22,     0,     0,    19,     0,    32,     0,     0,
       0,     0,    10,     0,     0,     0,    28,     0,    28,    23,
      29,    30,    27,     0,    33,     0,    34,     0,     0,    18,
      21,     0,     0,    31,     0,     0,     0,    17,   104,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,   103,   100,   101,   102,     0,     0,    53,     0,    41,
      43,    52,     0,     0,    45,    46,    47,    48,    50,    49,
      51,     0,    70,    72,    69,    28,    24,    25,    20,    20,
       0,     0,     0,    93,    62,     0,    64,     0,     0,     0,
       0,     0,    99,    79,    88,     0,    39,    42,     0,    40,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,     0,     0,    67,
      89,    90,    98,     0,    73,    38,    81,    83,    84,    85,
      86,    87,    80,    82,    74,    75,    76,    77,    78,     0,
      94,    68,    26,     0,     0,     0,     0,     0,     0,    91,
       0,     0,     0,    96,    95,    99,    37,    36,    57,     0,
       0,    55,     0,    65,    66,     0,     0,     0,     0,     0,
      92,    97,    58,     0,     0,     0,    56,    60,    59,     0,
      61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,   195,     1,   -18,     0,    23,   -26,   -92,
     -92,   -42,   -92,   159,   -92,   -92,   -92,   -19,   -92,   117,
     -91,   -92,   -92,   -92,   -92,   -92,   -92,    89,   -66,   -92,
     -92,    16,   -92
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    50,    13,    33,    51,    34,    35,
      16,    39,    52,    38,    17,    40,    56,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   162,   101,   102,
     103,   163,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    12,   130,    24,    62,    41,    64,   115,    32,    45,
      14,    12,    27,    32,    21,    28,   -15,    24,    18,   123,
     124,    23,   125,    15,    59,    19,    60,    26,     1,     2,
       3,     4,     5,    15,    20,   -15,    25,   130,    67,    14,
      55,    24,   210,    46,   151,   153,   154,    47,    48,    29,
      47,   105,   157,   159,   122,   116,   159,     8,    36,    90,
      42,    30,    14,   148,    14,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,    37,
      49,   181,   149,   150,   144,   145,   186,   191,   192,    31,
      32,    32,    43,   127,   198,    24,    44,   201,    53,     2,
       3,     4,     5,     1,     2,     3,     4,     5,     1,     2,
       3,     4,     5,    57,    66,   212,    58,    63,   216,    65,
     108,   200,   217,   218,   109,   110,   204,     8,   220,   159,
     111,   112,     8,   207,   117,   118,   147,     8,     2,     3,
       4,     5,   215,     1,     2,     3,     4,     5,    14,   119,
      54,   156,   120,   121,   122,   106,     2,     3,     4,     5,
     107,   160,   161,   180,   183,   184,     8,   189,    68,   192,
      69,   195,     8,    70,    71,    72,   193,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   196,
     202,   197,   203,    85,   209,   182,   211,    86,     2,     3,
       4,     5,    87,    88,    61,    22,    58,    89,   158,   128,
      68,   205,    69,     0,     0,    70,    71,    72,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   131,   132,   133,   134,    85,   135,   136,     0,    86,
       0,   141,   142,   143,    87,    88,   144,   145,    58,   126,
     131,   132,   133,   134,     0,   135,   136,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,     0,     0,   144,
     145,   131,   132,   133,   134,     0,   135,   136,   194,   137,
     138,   139,   140,   141,   142,   143,     0,     0,   144,   145,
     131,   132,   133,   134,   190,   135,   136,     0,     0,     0,
     137,   138,   139,   140,   141,   142,   143,     0,     0,   144,
     145,     0,     0,     0,   164,     0,     0,     0,     0,   137,
     138,   139,   140,   141,   142,   143,     0,     0,   144,   145,
       0,     0,     0,   185,   131,   132,   133,   134,     0,   135,
     136,     1,     2,     3,     4,     5,     6,     0,     0,   131,
     132,   133,   134,     0,   135,   136,     0,     7,     0,     0,
       0,     0,     0,   137,   138,   139,   140,   141,   142,   143,
       8,     0,   144,   145,     0,     0,     0,   188,   137,   138,
     139,   140,   141,   142,   143,     0,     0,   144,   145,     0,
       0,     0,   213,   131,   132,   133,   134,     0,   135,   136,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   132,
     133,   134,     0,   135,   136,     0,     0,     0,     0,     0,
       0,     0,   137,   138,   139,   140,   141,   142,   143,     0,
       0,   144,   145,     0,     0,     0,   219,   137,   138,   139,
     140,   141,   142,   143,     0,     0,   144,   145,     0,   146,
     131,   132,   133,   134,     0,   135,   136,     0,     0,     0,
       0,     0,     0,   131,   132,   133,   134,     0,   135,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   137,
     138,   139,   140,   141,   142,   143,     0,     0,   144,   145,
       0,   155,   137,   138,   139,   140,   141,   142,   143,     0,
       0,   144,   145,     0,   187,   131,   132,   133,   134,     0,
     135,   136,     0,     0,     0,     0,     0,     0,   131,   132,
     133,   134,     0,   135,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,   138,   139,   140,   141,   142,
     143,     0,     0,   144,   145,     0,   199,   137,   138,   139,
     140,   141,   142,   143,     0,     0,   144,   145,    68,   208,
      69,     0,     0,    70,    71,    72,     0,    73,    74,    75,
      76,    77,    78,    79,   113,    81,    82,    83,    84,     0,
       0,     0,     0,    85,     0,     0,     0,    86,     0,     0,
       0,     0,    87,    88,     0,     0,    58,   129,    68,     0,
      69,     0,     0,    70,    71,    72,     0,    73,    74,    75,
      76,    77,    78,    79,   113,    81,    82,    83,    84,   131,
     132,   133,   134,    85,   135,   136,     0,    86,     0,     0,
       0,     0,    87,    88,     0,     0,    58,   165,   131,   132,
     133,   134,     0,   135,     0,     0,     0,     0,   137,   138,
     139,   140,   141,   142,   143,     0,     0,   144,   145,   131,
     132,   133,   134,     0,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   -16,   -16,   144,   145,     0,     0,
       0,     0,     0,     0,     0,   131,   132,     0,   137,   138,
     139,   140,   141,   142,   143,     0,     0,   144,   145,     0,
       0,     0,     0,   -16,   -16,   139,   140,   141,   142,   143,
       0,     0,   144,   145,   137,   138,   139,   140,   141,   142,
     143,     0,     0,   144,   145,    68,     0,    69,     0,     0,
      70,    71,    72,     0,    73,    74,    75,    76,    77,    78,
      79,   113,    81,    82,    83,    84,     0,     0,     0,     0,
      85,     0,     0,    68,    86,    69,     0,     0,     0,    87,
      88,     0,     0,    58,    75,    76,     0,    78,    79,   113,
      81,    82,    83,    84,     0,     0,     0,     0,    85,    68,
       0,    69,    86,     0,     0,     0,     0,     0,    88,   206,
      75,    76,     0,    78,    79,   113,    81,    82,    83,    84,
       0,     0,     0,     0,    85,    68,     0,    69,    86,     0,
       0,     0,     0,     0,    88,   214,    75,    76,     0,    78,
      79,   113,    81,    82,    83,    84,     0,     0,     0,     0,
      85,    68,     0,    69,    86,     0,     0,     0,     0,   114,
      88,     0,    75,    76,     0,    78,    79,   113,    81,    82,
      83,    84,     0,     0,     0,     0,    85,    68,     0,    69,
      86,     0,     0,     0,     0,   152,    88,     0,    75,    76,
       0,    78,    79,   113,    81,    82,    83,    84,     0,     0,
       0,     0,    85,     0,     0,     0,    86,     0,     0,     0,
       0,     0,    88
};

static const yytype_int16 yycheck[] =
{
       0,     0,    93,    13,    46,    31,    48,    73,    26,    20,
      10,    10,    17,    31,     0,    20,    13,    13,    32,    85,
      86,    50,    88,     0,    43,    32,    44,    51,     3,     4,
       5,     6,     7,    10,    32,    32,    32,   128,    57,    39,
      40,    13,    52,    54,   110,   111,   112,    53,    54,    54,
      53,    54,   118,   119,    51,    50,   122,    32,    32,    58,
      32,    54,    62,   105,    64,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    32,
      55,   147,   108,   109,    47,    48,   152,    52,    53,    51,
     108,   109,    52,    92,   185,    13,    53,   188,     3,     4,
       5,     6,     7,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    52,    32,   206,    54,    32,   209,    32,
      51,   187,   213,   214,    51,    51,   192,    32,   219,   195,
      51,    51,    32,   199,    51,    51,    37,    32,     4,     5,
       6,     7,   208,     3,     4,     5,     6,     7,   148,    51,
      55,    32,    51,    51,    51,    55,     4,     5,     6,     7,
      55,    52,    52,    32,    52,    52,    32,    52,    16,    53,
      18,    51,    32,    21,    22,    23,    52,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    50,
     190,    50,    50,    41,    24,    55,    52,    45,     4,     5,
       6,     7,    50,    51,    45,    10,    54,    55,   119,    92,
      16,   195,    18,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     9,    10,    11,    12,    41,    14,    15,    -1,    45,
      -1,    42,    43,    44,    50,    51,    47,    48,    54,    55,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    47,
      48,     9,    10,    11,    12,    -1,    14,    15,    56,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    47,    48,
       9,    10,    11,    12,    53,    14,    15,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    47,
      48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    47,    48,
      -1,    -1,    -1,    52,     9,    10,    11,    12,    -1,    14,
      15,     3,     4,     5,     6,     7,     8,    -1,    -1,     9,
      10,    11,    12,    -1,    14,    15,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      32,    -1,    47,    48,    -1,    -1,    -1,    52,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    48,    -1,
      -1,    -1,    52,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    48,    -1,    -1,    -1,    52,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,    48,    -1,    50,
       9,    10,    11,    12,    -1,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    47,    48,
      -1,    50,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    48,    -1,    50,     9,    10,    11,    12,    -1,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    48,    -1,    50,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,    48,    16,    50,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    55,    16,    -1,
      18,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     9,
      10,    11,    12,    41,    14,    15,    -1,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    55,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    48,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,     9,    10,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    -1,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    47,    48,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    48,    16,    -1,    18,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    16,    45,    18,    -1,    -1,    -1,    50,
      51,    -1,    -1,    54,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    16,
      -1,    18,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    41,    16,    -1,    18,    45,    -1,
      -1,    -1,    -1,    -1,    51,    52,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    16,    -1,    18,    45,    -1,    -1,    -1,    -1,    50,
      51,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    41,    16,    -1,    18,
      45,    -1,    -1,    -1,    -1,    50,    51,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    19,    32,    58,
      59,    60,    61,    62,    63,    64,    67,    71,    32,    32,
      32,     0,    60,    50,    13,    32,    51,    17,    20,    54,
      54,    51,    62,    63,    65,    66,    32,    32,    70,    68,
      72,    65,    32,    52,    53,    20,    54,    53,    54,    55,
      61,    64,    69,     3,    55,    63,    73,    52,    54,    74,
      62,    70,    68,    32,    68,    32,    32,    74,    16,    18,
      21,    22,    23,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    41,    45,    50,    51,    55,
      61,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    85,    86,    87,    89,    54,    55,    55,    51,    51,
      51,    51,    51,    32,    50,    85,    50,    51,    51,    51,
      51,    51,    51,    85,    85,    85,    55,    61,    76,    55,
      77,     9,    10,    11,    12,    14,    15,    38,    39,    40,
      41,    42,    43,    44,    47,    48,    50,    37,    68,    65,
      65,    85,    50,    85,    85,    50,    32,    85,    84,    85,
      52,    52,    84,    88,    52,    55,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      32,    85,    55,    52,    52,    52,    85,    50,    52,    52,
      53,    52,    53,    52,    56,    51,    50,    50,    77,    50,
      85,    77,    63,    50,    85,    88,    52,    85,    50,    24,
      52,    52,    77,    52,    52,    85,    77,    77,    77,    52,
      77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    60,    60,    61,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    72,    72,    73,    73,    74,    74,
      74,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    80,    80,
      80,    80,    81,    81,    82,    83,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    88,    88,
      89,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     2,     6,     6,     1,
       0,     3,     1,     5,     7,     7,     9,     2,     0,     1,
       1,     3,     1,     5,     2,     0,     6,     6,     4,     3,
       3,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     7,     5,     7,     8,
       8,     9,     2,     3,     2,     5,     3,     1,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     4,     6,     1,     3,     4,     4,     6,     1,     0,
       1,     1,     1,     1,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 105 "parser.y" /* yacc.c:1646  */
    {
                        (yylsp[0]); 
                        /* pp2: The @1 is needed to convince 
                         * yacc to set up yylloc. You can remove 
                         * it once you have other uses of @n*/
                        Program *program = new Program((yyvsp[0].declList));
                        // if no errors, advance to next phase
                        if (ReportError::NumErrors() == 0) 
                            program->Print(0);
}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 117 "parser.y" /* yacc.c:1646  */
    {}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "parser.y" /* yacc.c:1646  */
    {}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 121 "parser.y" /* yacc.c:1646  */
    {}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 122 "parser.y" /* yacc.c:1646  */
    {}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 123 "parser.y" /* yacc.c:1646  */
    {}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 124 "parser.y" /* yacc.c:1646  */
    {}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 128 "parser.y" /* yacc.c:1646  */
    {}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 131 "parser.y" /* yacc.c:1646  */
    {}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 134 "parser.y" /* yacc.c:1646  */
    {}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "parser.y" /* yacc.c:1646  */
    {}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 136 "parser.y" /* yacc.c:1646  */
    {}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 137 "parser.y" /* yacc.c:1646  */
    {}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 138 "parser.y" /* yacc.c:1646  */
    {}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 139 "parser.y" /* yacc.c:1646  */
    {}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 142 "parser.y" /* yacc.c:1646  */
    {}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 143 "parser.y" /* yacc.c:1646  */
    {}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 146 "parser.y" /* yacc.c:1646  */
    {}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 147 "parser.y" /* yacc.c:1646  */
    {}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 150 "parser.y" /* yacc.c:1646  */
    {}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 151 "parser.y" /* yacc.c:1646  */
    {}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 154 "parser.y" /* yacc.c:1646  */
    {}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 155 "parser.y" /* yacc.c:1646  */
    {}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 156 "parser.y" /* yacc.c:1646  */
    {}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 157 "parser.y" /* yacc.c:1646  */
    {}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 160 "parser.y" /* yacc.c:1646  */
    {}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 161 "parser.y" /* yacc.c:1646  */
    {}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 164 "parser.y" /* yacc.c:1646  */
    {}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 167 "parser.y" /* yacc.c:1646  */
    {}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 168 "parser.y" /* yacc.c:1646  */
    {}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 171 "parser.y" /* yacc.c:1646  */
    {}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 174 "parser.y" /* yacc.c:1646  */
    {}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 175 "parser.y" /* yacc.c:1646  */
    {}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 178 "parser.y" /* yacc.c:1646  */
    {}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 179 "parser.y" /* yacc.c:1646  */
    {}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 182 "parser.y" /* yacc.c:1646  */
    {}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 183 "parser.y" /* yacc.c:1646  */
    {}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 184 "parser.y" /* yacc.c:1646  */
    {}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 185 "parser.y" /* yacc.c:1646  */
    {}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 188 "parser.y" /* yacc.c:1646  */
    {}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 189 "parser.y" /* yacc.c:1646  */
    {}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 192 "parser.y" /* yacc.c:1646  */
    {}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 193 "parser.y" /* yacc.c:1646  */
    {}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 196 "parser.y" /* yacc.c:1646  */
    {}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 197 "parser.y" /* yacc.c:1646  */
    {}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 198 "parser.y" /* yacc.c:1646  */
    {}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 199 "parser.y" /* yacc.c:1646  */
    {}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "parser.y" /* yacc.c:1646  */
    {}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 201 "parser.y" /* yacc.c:1646  */
    {}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 202 "parser.y" /* yacc.c:1646  */
    {}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 203 "parser.y" /* yacc.c:1646  */
    {}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 204 "parser.y" /* yacc.c:1646  */
    {}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 207 "parser.y" /* yacc.c:1646  */
    {}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 208 "parser.y" /* yacc.c:1646  */
    {}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 211 "parser.y" /* yacc.c:1646  */
    {}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 214 "parser.y" /* yacc.c:1646  */
    {}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 215 "parser.y" /* yacc.c:1646  */
    {}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 216 "parser.y" /* yacc.c:1646  */
    {}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 217 "parser.y" /* yacc.c:1646  */
    {}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 220 "parser.y" /* yacc.c:1646  */
    {}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 221 "parser.y" /* yacc.c:1646  */
    {}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 224 "parser.y" /* yacc.c:1646  */
    {}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 227 "parser.y" /* yacc.c:1646  */
    {}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 230 "parser.y" /* yacc.c:1646  */
    {}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 231 "parser.y" /* yacc.c:1646  */
    {}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 234 "parser.y" /* yacc.c:1646  */
    {}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 235 "parser.y" /* yacc.c:1646  */
    {}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 236 "parser.y" /* yacc.c:1646  */
    {}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 237 "parser.y" /* yacc.c:1646  */
    {}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 238 "parser.y" /* yacc.c:1646  */
    {}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 239 "parser.y" /* yacc.c:1646  */
    {}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 240 "parser.y" /* yacc.c:1646  */
    {}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 241 "parser.y" /* yacc.c:1646  */
    {}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 242 "parser.y" /* yacc.c:1646  */
    {}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 243 "parser.y" /* yacc.c:1646  */
    {}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 244 "parser.y" /* yacc.c:1646  */
    {}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 245 "parser.y" /* yacc.c:1646  */
    {}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 246 "parser.y" /* yacc.c:1646  */
    {}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 247 "parser.y" /* yacc.c:1646  */
    {}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 248 "parser.y" /* yacc.c:1646  */
    {}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 249 "parser.y" /* yacc.c:1646  */
    {}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 250 "parser.y" /* yacc.c:1646  */
    {}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 251 "parser.y" /* yacc.c:1646  */
    {}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 252 "parser.y" /* yacc.c:1646  */
    {}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 253 "parser.y" /* yacc.c:1646  */
    {}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 254 "parser.y" /* yacc.c:1646  */
    {}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 255 "parser.y" /* yacc.c:1646  */
    {}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 256 "parser.y" /* yacc.c:1646  */
    {}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 257 "parser.y" /* yacc.c:1646  */
    {}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 258 "parser.y" /* yacc.c:1646  */
    {}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 261 "parser.y" /* yacc.c:1646  */
    {}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 262 "parser.y" /* yacc.c:1646  */
    {}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 263 "parser.y" /* yacc.c:1646  */
    {}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 266 "parser.y" /* yacc.c:1646  */
    {}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 267 "parser.y" /* yacc.c:1646  */
    {}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 270 "parser.y" /* yacc.c:1646  */
    {}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 271 "parser.y" /* yacc.c:1646  */
    {}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 274 "parser.y" /* yacc.c:1646  */
    {}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 275 "parser.y" /* yacc.c:1646  */
    {}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 276 "parser.y" /* yacc.c:1646  */
    {}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 277 "parser.y" /* yacc.c:1646  */
    {}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 278 "parser.y" /* yacc.c:1646  */
    {}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2320 "y.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 284 "parser.y" /* yacc.c:1906  */


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}
