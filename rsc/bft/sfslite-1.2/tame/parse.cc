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
#line 25 "./parse.yy" /* yacc.c:339  */

#include "tame.h"
#include "parseopt.h"
#define YYSTYPE YYSTYPE
int vars_lineno;

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
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_ID = 258,
    T_NUM = 259,
    T_PASSTHROUGH = 260,
    T_CONST = 261,
    T_STRUCT = 262,
    T_TYPENAME = 263,
    T_VOID = 264,
    T_CHAR = 265,
    T_SHORT = 266,
    T_INT = 267,
    T_LONG = 268,
    T_LONG_LONG = 269,
    T_FLOAT = 270,
    T_DOUBLE = 271,
    T_SIGNED = 272,
    T_UNSIGNED = 273,
    T_STATIC = 274,
    T_TEMPLATE = 275,
    T_HOLDVAR = 276,
    T_2COLON = 277,
    T_RETURN = 278,
    T_TAME = 279,
    T_TAMED = 280,
    T_VARS = 281,
    T_JOIN = 282,
    T_TWAIT = 283,
    T_DEFAULT_RETURN = 284,
    T_2DOLLAR = 285
  };
#endif
/* Tokens.  */
#define T_ID 258
#define T_NUM 259
#define T_PASSTHROUGH 260
#define T_CONST 261
#define T_STRUCT 262
#define T_TYPENAME 263
#define T_VOID 264
#define T_CHAR 265
#define T_SHORT 266
#define T_INT 267
#define T_LONG 268
#define T_LONG_LONG 269
#define T_FLOAT 270
#define T_DOUBLE 271
#define T_SIGNED 272
#define T_UNSIGNED 273
#define T_STATIC 274
#define T_TEMPLATE 275
#define T_HOLDVAR 276
#define T_2COLON 277
#define T_RETURN 278
#define T_TAME 279
#define T_TAMED 280
#define T_VARS 281
#define T_JOIN 282
#define T_TWAIT 283
#define T_DEFAULT_RETURN 284
#define T_2DOLLAR 285

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 179 "y.tab.c" /* yacc.c:358  */

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
struct yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (struct yyalloc) - 1)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,     2,
      31,    32,    41,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      35,     2,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   104,   105,   108,   109,   117,   118,
     122,   121,   141,   142,   143,   146,   152,   153,   157,   164,
     165,   168,   172,   179,   180,   181,   182,   185,   198,   197,
     218,   230,   229,   251,   252,   255,   261,   268,   280,   293,
     296,   297,   300,   313,   314,   317,   318,   321,   322,   327,
     330,   334,   348,   358,   357,   364,   365,   368,   369,   374,
     396,   404,   413,   416,   420,   426,   437,   441,   455,   465,
     466,   467,   470,   471,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   496,   497,   498,   499,   502,   503,   509,
     510,   517,   518,   524,   530,   531,   534,   540,   541,   544,
     545,   551,   557,   558,   561,   562,   565,   566
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ID", "T_NUM", "T_PASSTHROUGH",
  "T_CONST", "T_STRUCT", "T_TYPENAME", "T_VOID", "T_CHAR", "T_SHORT",
  "T_INT", "T_LONG", "T_LONG_LONG", "T_FLOAT", "T_DOUBLE", "T_SIGNED",
  "T_UNSIGNED", "T_STATIC", "T_TEMPLATE", "T_HOLDVAR", "T_2COLON",
  "T_RETURN", "T_TAME", "T_TAMED", "T_VARS", "T_JOIN", "T_TWAIT",
  "T_DEFAULT_RETURN", "T_2DOLLAR", "'('", "')'", "'{'", "'}'", "'<'",
  "'>'", "';'", "','", "'['", "']'", "'*'", "'&'", "$accept", "file",
  "fn_or_twait", "passthrough", "tame_decl", "fn", "$@1", "fn_specifiers",
  "template_decl", "static_opt", "fn_declaration", "const_opt",
  "fn_statements", "fn_tame", "default_return", "vars", "$@2",
  "return_statement", "block_body", "$@3", "id_list_opt", "id_list",
  "join_list", "wait_body", "twait", "twait_body", "identifier",
  "declaration_list_opt", "declaration_list", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "declaration", "$@4", "init_declarator_list_opt", "init_declarator_list",
  "init_declarator", "declarator", "declarator_cpp", "cpp_initializer_opt",
  "direct_declarator_cpp", "direct_declarator", "declaration_specifiers",
  "type_modifier", "type_modifier_list", "type_specifier",
  "type_qualifier", "type_qualifier_list", "type_qualifier_list_opt",
  "typedef_name", "typedef_name_single", "template_instantiation_opt",
  "template_instantiation", "template_instantiation_list_opt",
  "template_instantiation_list", "template_instantiation_arg",
  "pointer_opt", "pointer_or_ref", "pointer", YY_NULLPTR
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
     285,    40,    41,   123,   125,    60,    62,    59,    44,    91,
      93,    42,    38
};
# endif

#define YYPACT_NINF -97

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-97)))

#define YYTABLE_NINF -103

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -97,    28,    19,   -97,   -26,    11,    -8,   -97,    -4,   -97,
     -97,   -97,    11,   -97,    -1,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,    19,   -97,     7,   -97,    -9,    51,     4,
      23,   -97,   -97,   -97,     5,   -97,   -97,    29,    34,     6,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,    35,   -97,   -97,   -97,
      16,   -97,    34,   -97,    33,    36,    19,    67,    87,    55,
     -97,   -97,   -97,   -11,   -97,    71,    -9,    39,   -97,   -97,
      34,   -97,    34,   -97,   -97,   -97,    47,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,    49,   -97,   -97,    -9,
      46,    48,   -97,   -97,   -97,    12,    52,   -97,    19,    57,
     -97,    53,   -97,    -9,   -97,   -97,   -97,   -97,    60,    17,
     -97,   -97,   -97,   -97,    63,    64,   -97,   -97,   -97,   -97,
     -97,   -97,     3,    50,    61,   -97,   -23,    34,   -97,    -9,
     -97,   -97,   -97,   -97,   -97,   -97,    14,    10,   -97,   -97
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     2,     1,     0,    14,     0,     6,     0,     4,
       5,     7,    14,    13,     0,    72,    12,     9,     6,    31,
      41,    40,    39,     3,    10,     0,     6,   102,     0,    33,
       0,     6,     6,     8,     0,   104,   105,    19,     0,   106,
     103,    42,    83,    84,    85,    74,    75,    76,    77,    78,
      79,    80,    81,    70,    71,    86,    94,    73,    68,    69,
      82,    91,     0,    37,    34,     0,    21,     0,     0,    17,
      20,    18,    60,    66,    87,    90,     0,    72,    93,    95,
       0,    35,     0,    38,     6,    28,     0,    32,     6,    26,
      23,    25,    24,    11,    16,    15,    72,    88,   107,   102,
       0,    98,    99,    92,    36,     0,     0,     6,    22,     0,
      48,    49,    50,   102,   101,    96,    72,    30,    72,     0,
      67,    72,    52,   100,     0,    72,    45,    53,    27,    51,
      29,    46,    55,     0,    56,    57,    62,     0,    54,   102,
       6,     6,    59,    65,    61,    58,     0,     0,    63,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,
      88,   -97,    70,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   102,   -97,   -61,   -97,   -97,   -97,
     -97,   -97,   -17,   -19,   -97,   -97,   -97,   -30,    -2,   -97,
     -97,   -97,   -97,   -13,   -97,   -97,   -97,   -35,   -97,   -97,
      76,    37,   -97,   -97,   -97,   -97,     2,   -96,   -97,    43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,    66,     8,     9,    32,    15,    16,    95,
      17,    71,    67,    88,    89,    90,   106,    91,    20,    31,
      63,    64,    30,    21,    92,    22,    56,   124,   125,   109,
     110,   111,   112,   126,   132,   133,   134,   135,    37,   136,
     142,   144,    72,    99,    57,    28,    58,    59,    75,    76,
      60,    61,    78,    79,   100,   101,   102,    38,    39,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       2,    81,    27,   114,    74,    12,  -102,    23,   140,    11,
      11,    80,    42,    43,    44,    11,   141,    11,    29,    11,
      96,   104,    11,    18,    11,    19,    34,    55,     3,    24,
      13,    14,    35,    36,    26,    70,   137,    41,    80,    33,
      97,    69,    62,   137,    35,    36,   148,   -89,   -89,   117,
     149,   128,     4,     5,    41,    65,     6,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      77,    82,    55,    83,    94,   -97,   143,    42,    43,    44,
     107,   -47,   115,   113,   105,   118,   116,   138,   108,   120,
      84,   121,    55,    85,   -43,     6,    86,   130,   -44,   139,
      25,    87,    68,    10,   129,   127,   131,   119,   113,   145,
      84,   122,   127,    85,    73,     6,    86,   103,   123,    98,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,   147
};

static const yytype_int16 yycheck[] =
{
       0,    62,    15,    99,    39,    31,     3,     7,    31,     5,
       5,    22,     6,     7,     8,     5,    39,     5,    18,     5,
      31,    82,     5,    31,     5,    33,    26,    21,     0,    33,
      19,    20,    41,    42,    35,     6,   132,     3,    22,    32,
      75,    36,    38,   139,    41,    42,    32,    41,    42,    37,
      40,    34,    24,    25,     3,    32,    28,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      35,    38,    21,    37,    19,    36,   137,     6,     7,     8,
      33,    32,    36,    96,    84,    33,    38,    37,    88,    32,
      23,    38,    21,    26,    34,    28,    29,    34,    34,    38,
      12,    34,    32,     1,   121,   118,   125,   107,   121,   139,
      23,   113,   125,    26,    38,    28,    29,    80,   116,    76,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    46,     0,    24,    25,    28,    45,    47,    48,
      67,     5,    31,    19,    20,    50,    51,    53,    31,    33,
      61,    66,    68,    46,    33,    53,    35,    86,    88,    46,
      65,    62,    49,    32,    46,    41,    42,    81,   100,   101,
     102,     3,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    21,    69,    87,    89,    90,
      93,    94,    38,    63,    64,    32,    46,    55,    55,    36,
       6,    54,    85,    93,    90,    91,    92,    35,    95,    96,
      22,    69,    38,    37,    23,    26,    29,    34,    56,    57,
      58,    60,    67,    34,    19,    52,    31,    90,   102,    86,
      97,    98,    99,    94,    69,    46,    59,    33,    46,    72,
      73,    74,    75,    86,   100,    36,    38,    37,    33,    46,
      32,    38,    81,    99,    70,    71,    76,    86,    34,    75,
      34,    76,    77,    78,    79,    80,    82,   100,    37,    38,
      31,    39,    83,    69,    84,    80,    46,    46,    32,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    46,    46,    47,    47,
      49,    48,    50,    50,    50,    51,    52,    52,    53,    54,
      54,    55,    55,    56,    56,    56,    56,    57,    59,    58,
      60,    62,    61,    63,    63,    64,    64,    65,    66,    67,
      68,    68,    69,    70,    70,    71,    71,    72,    72,    73,
      74,    74,    75,    77,    76,    78,    78,    79,    79,    80,
      81,    82,    83,    83,    83,    84,    85,    85,    86,    87,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    95,    95,    96,    97,    97,    98,
      98,    99,   100,   100,   101,   101,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     0,     2,     4,     2,
       0,     5,     1,     1,     0,     5,     1,     0,     4,     0,
       1,     1,     3,     1,     1,     1,     1,     4,     0,     5,
       3,     0,     4,     0,     1,     2,     3,     2,     4,     2,
       1,     1,     1,     0,     1,     1,     2,     0,     1,     1,
       1,     3,     2,     0,     4,     0,     1,     1,     3,     2,
       2,     2,     0,     3,     3,     1,     1,     4,     2,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     1,     3,     2,     0,     1,     3,     0,     1,     1,
       3,     2,     0,     1,     1,     1,     1,     3
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
        struct yyalloc *yyptr =
          (struct yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
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
#line 100 "./parse.yy" /* yacc.c:1646  */
    { state->passthrough ((yyvsp[0].str)); }
#line 1382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 101 "./parse.yy" /* yacc.c:1646  */
    { state->passthrough ((yyvsp[0].str)); }
#line 1388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 105 "./parse.yy" /* yacc.c:1646  */
    { state->new_el ((yyvsp[0].el)); }
#line 1394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 108 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = lstr (get_yy_lineno ()); }
#line 1400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 110 "./parse.yy" /* yacc.c:1646  */
    {
	   strbuf b ((yyvsp[-1].str));
	   b << (yyvsp[0].str);
	   (yyval.str) = lstr ((yyvsp[-1].str).lineno (), b);
	}
#line 1410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 117 "./parse.yy" /* yacc.c:1646  */
    { (yyval.fn) = (yyvsp[-1].fn); }
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 118 "./parse.yy" /* yacc.c:1646  */
    { (yyval.fn) = (yyvsp[0].fn); }
#line 1422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 122 "./parse.yy" /* yacc.c:1646  */
    {
	  state->new_fn ((yyvsp[-1].fn));
	  state->push_list ((yyvsp[-1].fn));
	  (yyvsp[-1].fn)->set_lbrace_lineno (get_yy_lineno ());
	}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "./parse.yy" /* yacc.c:1646  */
    {
	  if (!state->function ()->check_return_type ()) {
	    yyerror ("Function has non-void return type but no "
	    	     "DEFAULT_RETURN specified");
 	  }
	  state->push (New tame_fn_return_t (get_yy_lineno (), 
				            state->function ()));
	  state->passthrough (lstr (get_yy_lineno (), "}"));
	  state->pop_list ();
	  state->clear_fn ();
	}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 141 "./parse.yy" /* yacc.c:1646  */
    { (yyval.fn_spc) = (yyvsp[0].fn_spc); }
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 142 "./parse.yy" /* yacc.c:1646  */
    { (yyval.fn_spc) = fn_specifier_t (STATIC_DECL); }
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 143 "./parse.yy" /* yacc.c:1646  */
    { (yyval.fn_spc) = fn_specifier_t (0); }
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 147 "./parse.yy" /* yacc.c:1646  */
    {
	   (yyval.fn_spc) = fn_specifier_t ((yyvsp[0].opts), (yyvsp[-2].str));
	}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 152 "./parse.yy" /* yacc.c:1646  */
    { (yyval.opts) = STATIC_DECL; }
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 153 "./parse.yy" /* yacc.c:1646  */
    { (yyval.opts) = 0; }
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 158 "./parse.yy" /* yacc.c:1646  */
    {
	   (yyval.fn) = New tame_fn_t ((yyvsp[-3].fn_spc), (yyvsp[-2].typ_mod).to_str (), (yyvsp[-1].decl), (yyvsp[0].opt), get_yy_lineno (), 
	                       get_yy_loc ());
	}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 164 "./parse.yy" /* yacc.c:1646  */
    { (yyval.opt) = false; }
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 165 "./parse.yy" /* yacc.c:1646  */
    { (yyval.opt) = true; }
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 169 "./parse.yy" /* yacc.c:1646  */
    {
	  state->passthrough ((yyvsp[0].str));
	}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 173 "./parse.yy" /* yacc.c:1646  */
    {
   	  if ((yyvsp[-1].el)) state->push ((yyvsp[-1].el));
	  state->passthrough ((yyvsp[0].str));
	}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 186 "./parse.yy" /* yacc.c:1646  */
    {
	  // this thing will not be output anywhere near where
	  // it's being input, so don't associate it in the 
	  // element list as usual.
	  if (!state->function ()->set_default_return ((yyvsp[-1].str))) {
	    yyerror ("DEFAULT_RETURN specified more than once");
	  }
	  (yyval.el) = NULL;
	}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 198 "./parse.yy" /* yacc.c:1646  */
    {
	  vars_lineno = get_yy_lineno ();
	}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 202 "./parse.yy" /* yacc.c:1646  */
    {
	  tame_vars_t *v = New tame_vars_t (state->function (), vars_lineno);
	  if (state->function ()->get_vars ()) {
	    strbuf b;
	    b << "VARS{} section specified twice (before on line " 
	      << state->function ()->get_vars ()->lineno () << ")\n";
	    yyerror (b);
	  }
	  if (!state->function ()->set_vars (v)) {
	    yyerror ("The tvars{} section must come before any twait "
	             " statement or environment");
	  }
	  (yyval.el) = v;
	}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 219 "./parse.yy" /* yacc.c:1646  */
    {
	   tame_ret_t *r = New tame_ret_t (get_yy_lineno (), 
			  	    state->function ());	
	   if ((yyvsp[-1].str))
	     r->add_params ((yyvsp[-1].str));
 	   r->passthrough (lstr (get_yy_lineno (), ";"));
	   (yyval.el) = r;
	}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 230 "./parse.yy" /* yacc.c:1646  */
    {
	  tame_fn_t *fn = state->function ();
	  tame_block_t *bb;
	  if (fn) {
 	    bb = New tame_block_ev_t (fn, get_yy_lineno ());
	    fn->add_env (bb);
	    fn->hit_tame_block ();
	  } else {
	    bb = New tame_block_thr_t (get_yy_lineno ());
	  }
	  state->new_block (bb);
	  state->push_list (bb);
	}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 244 "./parse.yy" /* yacc.c:1646  */
    {
 	  state->pop_list ();
	  (yyval.el) = state->block ();
	  state->clear_block ();
	}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 251 "./parse.yy" /* yacc.c:1646  */
    { (yyval.exprs) = NULL; }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 256 "./parse.yy" /* yacc.c:1646  */
    {
	  (yyval.exprs) = New refcounted<expr_list_t> ();
	  (yyval.exprs)->push_back (var_t ()); // reserve 1 empty spot!
	  (yyval.exprs)->push_back (var_t ((yyvsp[0].str), STACK));
	}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 262 "./parse.yy" /* yacc.c:1646  */
    {
	  (yyvsp[-2].exprs)->push_back (var_t ((yyvsp[0].str), STACK));
	  (yyval.exprs) = (yyvsp[-2].exprs);
	}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 269 "./parse.yy" /* yacc.c:1646  */
    {
	  if ((yyvsp[0].exprs)) {
	    (*(yyvsp[0].exprs))[0] = var_t ((yyvsp[-1].str), EXPR);
	    (yyval.exprs) = (yyvsp[0].exprs);
	  } else {
	    (yyval.exprs) = New refcounted<expr_list_t> ();
	    (yyval.exprs)->push_back (var_t ((yyvsp[-1].str), EXPR));
	  }
	}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 281 "./parse.yy" /* yacc.c:1646  */
    {
	  tame_fn_t *fn = state->function ();
	  tame_wait_t *w = New tame_wait_t (fn, (yyvsp[-2].exprs), get_yy_lineno ());
	  if (fn) fn->add_env (w);
	  else {
	    yyerror ("Cannot have a twait() statement outside of a "
	 	     "tamed function body.");
	  }
	  (yyval.el) = w;
	}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 293 "./parse.yy" /* yacc.c:1646  */
    { (yyval.el) = (yyvsp[0].el); }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 321 "./parse.yy" /* yacc.c:1646  */
    { (yyval.vars) = NULL; }
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 331 "./parse.yy" /* yacc.c:1646  */
    {
	  (yyval.vars) = New refcounted<vartab_t> ((yyvsp[0].var));
	}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 335 "./parse.yy" /* yacc.c:1646  */
    {
	  if (! ((yyvsp[-2].vars))->add ((yyvsp[0].var)) ) {
	    strbuf b;
	    b << "duplicated parameter in param list: " << (yyvsp[0].var).name ();
	    yyerror (b);
          } else {
 	    (yyval.vars) = (yyvsp[-2].vars);
          }
	}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 349 "./parse.yy" /* yacc.c:1646  */
    {
	  if ((yyvsp[0].decl)->params ()) {
	    warn << "parameters found when not expected\n";
	  }
	  (yyval.var) = var_t ((yyvsp[-1].typ_mod), (yyvsp[0].decl), ARG);
	}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 358 "./parse.yy" /* yacc.c:1646  */
    {
	  state->set_decl_specifier ((yyvsp[0].typ_mod));
	}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 368 "./parse.yy" /* yacc.c:1646  */
    {}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 369 "./parse.yy" /* yacc.c:1646  */
    {}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 375 "./parse.yy" /* yacc.c:1646  */
    {
	  assert ((yyvsp[0].initializer));
	  (yyvsp[-1].decl)->set_initializer ((yyvsp[0].initializer));

	  vartab_t *t = state->stack_vars ();

	  var_t v (state->decl_specifier (), (yyvsp[-1].decl), STACK);
	  if (state->args () &&
              state->args ()->exists (v.name ())) {
	    strbuf b;
	    b << "stack variable '" << v.name () << "' shadows a parameter";
	    yyerror (b);
	  }
	  if (!t->add (v)) {
	    strbuf b;
	    b << "redefinition of stack variable: " << v.name () ;
 	    yyerror (b);
          }
	}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 397 "./parse.yy" /* yacc.c:1646  */
    {
	  if ((yyvsp[-1].str).len () > 0) 
	    (yyvsp[0].decl)->set_pointer ((yyvsp[-1].str));
  	  (yyval.decl) = (yyvsp[0].decl);
	}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 405 "./parse.yy" /* yacc.c:1646  */
    {
	  if ((yyvsp[-1].str).len () > 0) 
	    (yyvsp[0].decl)->set_pointer ((yyvsp[-1].str));
  	  (yyval.decl) = (yyvsp[0].decl);
	}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 413 "./parse.yy" /* yacc.c:1646  */
    { 
	  (yyval.initializer) = New refcounted<initializer_t> (); 
	}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 417 "./parse.yy" /* yacc.c:1646  */
    {
	  (yyval.initializer) = New refcounted<cpp_initializer_t> ((yyvsp[-1].str)); 
	}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 421 "./parse.yy" /* yacc.c:1646  */
    {
	  (yyval.initializer) = New refcounted<array_initializer_t> ((yyvsp[-1].str));
	}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 427 "./parse.yy" /* yacc.c:1646  */
    {
	  (yyval.decl) = New refcounted<declarator_t> ((yyvsp[0].str));
	}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 438 "./parse.yy" /* yacc.c:1646  */
    {
	   (yyval.decl) = New refcounted<declarator_t> ((yyvsp[0].str));
	}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 442 "./parse.yy" /* yacc.c:1646  */
    {
	   (yyval.decl) = New refcounted<declarator_t> ((yyvsp[-3].str), (yyvsp[-1].vars));
	}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 456 "./parse.yy" /* yacc.c:1646  */
    {
	   (yyvsp[-1].typ_mod).add_lstr ((yyvsp[0].str));
	   (yyval.typ_mod) = (yyvsp[-1].typ_mod);
	}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 466 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = type_qualifier_t ("signed"); }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 467 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = type_qualifier_t ("unsigned"); }
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 470 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = type_qualifier_t (""); }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 472 "./parse.yy" /* yacc.c:1646  */
    {
	  (yyval.typ_mod) = (yyvsp[-1].typ_mod).concat ((yyvsp[0].typ_mod));
	}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 482 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "void" ; }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 483 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "char";  }
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 484 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "short"; }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 485 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "int" ; }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 486 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "long" ; }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 487 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "long long"; }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 488 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "float"; }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 489 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "double" ; }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 496 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = type_qualifier_t ("const", CONST_FLAG); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 497 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = type_qualifier_t ("struct"); }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 498 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = type_qualifier_t ("typename"); }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 499 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = type_qualifier_t (lstr (), HOLDVAR_FLAG); }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 504 "./parse.yy" /* yacc.c:1646  */
    {
	  (yyval.typ_mod) = (yyvsp[-1].typ_mod).concat ((yyvsp[0].typ_mod));
	}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 509 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = type_qualifier_t (""); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 510 "./parse.yy" /* yacc.c:1646  */
    { (yyval.typ_mod) = (yyvsp[0].typ_mod); }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 519 "./parse.yy" /* yacc.c:1646  */
    {
	   CONCAT((yyvsp[-2].str).lineno (), (yyvsp[-2].str) << "::" << (yyvsp[0].str), (yyval.str));
	}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 525 "./parse.yy" /* yacc.c:1646  */
    {
          CONCAT((yyvsp[-1].str).lineno (), (yyvsp[-1].str) << (yyvsp[0].str), (yyval.str));
	}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 530 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = ""; }
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 535 "./parse.yy" /* yacc.c:1646  */
    {
	  CONCAT((yyvsp[-1].str).lineno (), "<" << (yyvsp[-1].str) << ">", (yyval.str));
	}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 540 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "" ; }
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 546 "./parse.yy" /* yacc.c:1646  */
    {
	  CONCAT((yyvsp[-2].str).lineno (), (yyvsp[-2].str) << " , " << (yyvsp[0].str), (yyval.str));
	}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 552 "./parse.yy" /* yacc.c:1646  */
    {
	  CONCAT((yyvsp[-1].typ_mod).lineno (), (yyvsp[-1].typ_mod).to_str () << " " << (yyvsp[0].str), (yyval.str));
	}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 557 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = ""; }
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 561 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "*"; }
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 562 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "&"; }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 565 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = (yyvsp[0].str); }
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 567 "./parse.yy" /* yacc.c:1646  */
    {
	  CONCAT((yyvsp[-1].typ_mod).lineno (), " " << (yyvsp[-2].str) << " " << (yyvsp[-1].typ_mod).to_str () << (yyvsp[0].str), (yyval.str));
	}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2032 "y.tab.c" /* yacc.c:1646  */
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
#line 572 "./parse.yy" /* yacc.c:1906  */


