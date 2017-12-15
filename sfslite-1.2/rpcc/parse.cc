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
#line 24 "./parse.yy" /* yacc.c:339  */

#include "rpcc.h"
#define YYSTYPE YYSTYPE

static int proc_compare (const void *, const void *);
static int vers_compare (const void *, const void *);
static str getnewid (str);
static str getid (str);

#line 76 "y.tab.c" /* yacc.c:339  */

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
    T_CONST = 260,
    T_STRUCT = 261,
    T_UNION = 262,
    T_ENUM = 263,
    T_TYPEDEF = 264,
    T_PROGRAM = 265,
    T_NAMESPACE = 266,
    T_UNSIGNED = 267,
    T_INT = 268,
    T_HYPER = 269,
    T_DOUBLE = 270,
    T_QUADRUPLE = 271,
    T_VOID = 272,
    T_VERSION = 273,
    T_SWITCH = 274,
    T_CASE = 275,
    T_DEFAULT = 276,
    T_OPAQUE = 277,
    T_STRING = 278
  };
#endif
/* Tokens.  */
#define T_ID 258
#define T_NUM 259
#define T_CONST 260
#define T_STRUCT 261
#define T_UNION 262
#define T_ENUM 263
#define T_TYPEDEF 264
#define T_PROGRAM 265
#define T_NAMESPACE 266
#define T_UNSIGNED 267
#define T_INT 268
#define T_HYPER 269
#define T_DOUBLE 270
#define T_QUADRUPLE 271
#define T_VOID 272
#define T_VERSION 273
#define T_SWITCH 274
#define T_CASE 275
#define T_DEFAULT 276
#define T_OPAQUE 277
#define T_STRING 278

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 168 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   278

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    32,     2,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,    25,
      35,    24,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    67,    67,    70,    71,    72,    73,    74,
      75,    76,    79,    86,    96,   106,   105,   114,   115,   119,
     118,   128,   127,   139,   138,   153,   152,   162,   162,   165,
     165,   169,   168,   184,   184,   187,   199,   199,   202,   205,
     205,   208,   215,   223,   230,   240,   240,   243,   247,   248,
     251,   255,   256,   259,   261,   266,   268,   271,   274,   276,
     278,   280,   283,   286,   291,   291,   294,   294,   297,   298,
     299,   300,   301,   302,   303,   306,   306,   309,   312,   315
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ID", "T_NUM", "T_CONST", "T_STRUCT",
  "T_UNION", "T_ENUM", "T_TYPEDEF", "T_PROGRAM", "T_NAMESPACE",
  "T_UNSIGNED", "T_INT", "T_HYPER", "T_DOUBLE", "T_QUADRUPLE", "T_VOID",
  "T_VERSION", "T_SWITCH", "T_CASE", "T_DEFAULT", "T_OPAQUE", "T_STRING",
  "'='", "';'", "'{'", "'}'", "','", "'('", "')'", "':'", "'*'", "'['",
  "']'", "'<'", "'>'", "$accept", "file", "$@1", "definition", "def_type",
  "def_const", "def_enum", "$@2", "comma_warn", "def_struct", "$@3",
  "def_union", "$@4", "def_program", "$@5", "def_namespace", "$@6",
  "program_list", "version_list", "version_decl", "$@7", "proc_list",
  "proc_decl", "union_taglist", "union_tag", "union_caselist",
  "union_case", "union_decl", "struct_decllist", "struct_decl",
  "enum_taglist", "enum_tag", "enum_cnstag", "declaration", "type_or_void",
  "type", "base_type", "value", "number", "newid", "id", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    61,    59,   123,   125,    44,    40,
      41,    58,    42,    91,    93,    60,    62
};
# endif

#define YYPACT_NINF -87

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -87,    13,   -87,   139,    28,    28,    28,    28,    97,    28,
      28,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
      26,    37,    20,    51,   -87,   102,    29,   -87,   -87,   -87,
     -87,    68,    78,   -87,     8,   -87,   -87,    58,    59,    64,
     -87,    70,   -87,   -87,   -87,   -87,    47,    -9,    21,    98,
     -87,   -87,   -87,    81,   -87,   102,   127,    28,    64,    15,
     -87,    17,   -87,    64,    19,    82,    90,   111,   -87,    22,
     -87,   -87,   119,    99,   -87,   -87,   104,    92,   113,   115,
     128,   116,   121,   129,   122,   -87,    28,    46,   -87,   -87,
      14,   131,   -87,   130,    28,   132,    64,   136,   -87,   137,
     -87,   138,   140,   -87,   141,   142,   133,   -87,   144,   -87,
     -87,   145,   -87,   147,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   160,   -87,   -87,   -87,   120,   -87,   148,    73,   -87,
      45,   -87,    28,   -87,   -87,    64,   143,    49,   -87,    75,
     -87,   146,   -87,   149,   150,   -87,   151,   -87,   152,   -87,
     -87,   -87,   160,   120,   -87,   -87,   -87,   154,   153,   -87,
     156,   160,   157,   -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     8,     5,     6,     7,     9,    10,    11,    78,
       0,     0,     0,     0,    79,     0,    68,    69,    71,    73,
      74,     0,     0,    12,     0,    66,    67,     0,     0,     0,
      19,     0,    15,    13,    70,    72,     0,     0,     0,     0,
      23,    25,    76,     0,    75,     0,     0,     0,     0,     0,
      54,     0,    53,     0,     0,     0,     0,     0,    14,     0,
      45,    47,     0,    17,    48,    50,    52,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,    29,    27,
       0,     0,    46,     0,    18,     0,     0,     0,    63,     0,
      62,     0,     0,    61,     0,     0,     0,    30,     0,    28,
      20,     0,    49,     0,    51,    57,    60,    59,    56,    58,
      31,     0,    26,    21,    16,     0,    77,     0,     0,    65,
       0,    33,     0,    64,    24,     0,     0,     0,    36,     0,
      39,     0,    34,     0,     0,    42,     0,    37,     0,    40,
      38,    43,     0,     0,    41,    22,    44,     0,     0,    32,
       0,     0,     0,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -38,   -87,   -87,   -87,   -87,   -87,    80,
     -87,   -87,    54,   -87,    38,   -87,    48,   -87,   -87,   117,
     -87,    91,   -87,    -8,    35,   -51,   -87,   -49,   -86,    -3,
     -31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    11,    12,    13,    14,    57,    95,    15,
      55,    16,   128,    17,    66,    18,    67,    90,    87,    88,
     125,   130,   131,   137,   138,   139,   140,   150,    69,    70,
      73,    74,    75,    71,   132,    34,    35,    53,   127,    76,
      36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      33,    20,    21,    22,    23,    72,    37,    38,    54,    77,
      79,    48,    81,     2,    82,    84,    60,    43,    24,    52,
      24,    52,    24,    52,     9,    24,    61,    54,    54,    89,
      54,    19,    54,    54,    26,    27,    28,    29,    30,    41,
      49,   108,    44,    45,    31,    32,    62,   114,    24,    91,
      39,    78,   109,    80,    63,    83,    64,    26,    27,    28,
      29,    30,   129,    40,    86,    54,   157,    24,    52,   135,
     136,    46,   141,   106,   133,   162,   146,    42,    24,   133,
      58,    47,    59,   105,    50,    51,   144,    26,    27,    28,
      29,    30,   148,   135,   136,   135,   136,    31,    32,    56,
      24,    65,   133,    25,    54,    24,    68,    85,    86,    26,
      27,    28,    29,    30,    26,    27,    28,    29,    30,    31,
      32,     9,    93,    24,    31,    32,    97,    94,    96,   143,
      24,   151,    26,    27,    28,    29,    30,   129,    98,    26,
      27,    28,    29,    30,     4,     5,     6,     7,     8,     9,
      10,    99,   101,   100,   103,   102,   110,   121,   104,   113,
     111,   115,   116,   117,   126,   118,   119,   107,   120,   122,
     152,   123,   124,   134,   145,   147,   155,   156,   153,   159,
     161,   154,   163,   160,   142,   112,    92,   149,   158
};

static const yytype_uint8 yycheck[] =
{
       8,     4,     5,     6,     7,    56,     9,    10,    39,    58,
      59,     3,    61,     0,    63,    64,    25,    25,     3,     4,
       3,     4,     3,     4,    10,     3,    35,    58,    59,    67,
      61,     3,    63,    64,    12,    13,    14,    15,    16,    19,
      32,    27,    13,    14,    22,    23,    25,    96,     3,    27,
      24,    36,    90,    36,    33,    36,    35,    12,    13,    14,
      15,    16,    17,    26,    18,    96,   152,     3,     4,    20,
      21,     3,    27,    27,   125,   161,    27,    26,     3,   130,
      33,     3,    35,    86,    26,    26,   135,    12,    13,    14,
      15,    16,    17,    20,    21,    20,    21,    22,    23,    29,
       3,     3,   153,     6,   135,     3,    25,    25,    18,    12,
      13,    14,    15,    16,    12,    13,    14,    15,    16,    22,
      23,    10,     3,     3,    22,    23,    34,    28,    24,   132,
       3,   139,    12,    13,    14,    15,    16,    17,    25,    12,
      13,    14,    15,    16,     5,     6,     7,     8,     9,    10,
      11,    36,    36,    25,    25,    34,    25,    24,    36,    27,
      30,    25,    25,    25,     4,    25,    25,    87,    26,    25,
      24,    26,    25,    25,    31,   137,    25,    25,    29,    25,
      24,    31,    25,    30,   130,    94,    69,   139,   153
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,     0,    39,     5,     6,     7,     8,     9,    10,
      11,    40,    41,    42,    43,    46,    48,    50,    52,     3,
      76,    76,    76,    76,     3,     6,    12,    13,    14,    15,
      16,    22,    23,    70,    72,    73,    77,    76,    76,    24,
      26,    19,    26,    70,    13,    14,     3,     3,     3,    32,
      26,    26,     4,    74,    77,    47,    29,    44,    33,    35,
      25,    35,    25,    33,    35,     3,    51,    53,    25,    65,
      66,    70,    72,    67,    68,    69,    76,    74,    36,    74,
      36,    74,    74,    36,    74,    25,    18,    55,    56,    50,
      54,    27,    66,     3,    28,    45,    24,    34,    25,    36,
      25,    36,    34,    25,    36,    76,    27,    56,    27,    50,
      25,    30,    68,    27,    74,    25,    25,    25,    25,    25,
      26,    24,    25,    26,    25,    57,     4,    75,    49,    17,
      58,    59,    71,    72,    25,    20,    21,    60,    61,    62,
      63,    27,    59,    76,    74,    31,    27,    61,    17,    63,
      64,    70,    24,    29,    31,    25,    25,    75,    71,    25,
      30,    24,    75,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    38,    40,    40,    40,    40,    40,
      40,    40,    41,    41,    42,    44,    43,    45,    45,    47,
      46,    49,    48,    51,    50,    53,    52,    54,    54,    55,
      55,    57,    56,    58,    58,    59,    60,    60,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    67,    67,
      68,    69,    69,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    75,    76,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     5,     0,     8,     0,     1,     0,
       7,     0,    12,     0,     9,     0,     7,     1,     2,     1,
       2,     0,     9,     1,     2,     8,     1,     2,     2,     1,
       2,     3,     2,     1,     2,     1,     2,     1,     1,     3,
       1,     3,     1,     3,     3,     4,     6,     6,     6,     6,
       6,     5,     5,     5,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1
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
#line 66 "./parse.yy" /* yacc.c:1646  */
    { checkliterals (); }
#line 1362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "./parse.yy" /* yacc.c:1646  */
    { checkliterals (); }
#line 1368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "./parse.yy" /* yacc.c:1646  */
    { checkliterals (); }
#line 1374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 80 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.push_back ();
	  s->settype (rpc_sym::TYPEDEF);
	  *s->stypedef = (yyvsp[0].decl);
	  s->stypedef->id = getnewid (s->stypedef->id);
	}
#line 1385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.push_back ();
	  s->settype (rpc_sym::TYPEDEF);
	  *s->stypedef = (yyvsp[0].decl);
	  s->stypedef->type = strbuf ("struct ") << (yyvsp[0].decl).type;
	  s->stypedef->id = getnewid (s->stypedef->id);
	}
#line 1397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.push_back ();
	  s->settype (rpc_sym::CONST);
	  s->sconst->id = (yyvsp[-3].str);
	  s->sconst->val = (yyvsp[-1].str);
	}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 106 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.push_back ();
	  s->settype (rpc_sym::ENUM);
	  s->senum->id = (yyvsp[-1].str);
	}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 115 "./parse.yy" /* yacc.c:1646  */
    { yywarn ("comma not allowed at end of enum"); }
#line 1424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.push_back ();
	  s->settype (rpc_sym::STRUCT);
	  s->sstruct->id = (yyvsp[-1].str);
	}
#line 1434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 128 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.push_back ();
	  s->settype (rpc_sym::UNION);
	  s->sunion->id = (yyvsp[-6].str);
	  s->sunion->tagtype = (yyvsp[-3].str);
	  s->sunion->tagid = (yyvsp[-2].str);
	}
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 139 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_program *s = get_prog (true);
	  s->id = (yyvsp[-1].str);
	}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 144 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_program *s = get_prog (false);
	  s->val = (yyvsp[-1].num);
	  qsort (s->vers.base (), s->vers.size (), 
	         sizeof (rpc_vers), vers_compare);
	}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.push_back ();
	  s->settype (rpc_sym::NAMESPACE);
	  s->snamespace->id = (yyvsp[-1].str);

        }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 169 "./parse.yy" /* yacc.c:1646  */
    {
          rpc_program *p = get_prog (false);
	  rpc_vers *rv = &p->vers.push_back ();
	  rv->id = (yyvsp[-1].str);
	}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 175 "./parse.yy" /* yacc.c:1646  */
    {
          rpc_program *p = get_prog (false);
	  rpc_vers *rv = &p->vers.back ();
	  rv->val = (yyvsp[-1].num);
	  qsort (rv->procs.base (), rv->procs.size (),
		 sizeof (rpc_proc), proc_compare);
	}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 188 "./parse.yy" /* yacc.c:1646  */
    {
          rpc_program *p = get_prog (false);
	  rpc_vers *rv = &p->vers.back ();
	  rpc_proc *rp = &rv->procs.push_back ();
	  rp->id = (yyvsp[-6].str);
	  rp->val = (yyvsp[-1].num);
	  rp->arg = (yyvsp[-4].str);
	  rp->res = (yyvsp[-7].str);
	}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 209 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.back ();
	  rpc_utag *ut = &s->sunion->cases.push_back ();
	  ut->tagvalid = false;
	  ut->swval = (yyvsp[-1].str);
	}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 216 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.back ();
	  rpc_utag *ut = &s->sunion->cases.push_back ();
	  ut->tagvalid = false;
	}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 224 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.back ();
	  rpc_utag *ut = &s->sunion->cases.back ();
	  ut->tagvalid = true;
	  ut->tag = (yyvsp[0].decl);
	}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 231 "./parse.yy" /* yacc.c:1646  */
    {
	  rpc_sym *s = &symlist.back ();
	  rpc_utag *ut = &s->sunion->cases.back ();
	  ut->tagvalid = true;
	  ut->tag.type = "void";
	  ut->tag.qual = rpc_decl::SCALAR;
	}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 244 "./parse.yy" /* yacc.c:1646  */
    { symlist.back ().sstruct->decls.push_back ((yyvsp[0].decl)); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 247 "./parse.yy" /* yacc.c:1646  */
    {}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 248 "./parse.yy" /* yacc.c:1646  */
    {}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 252 "./parse.yy" /* yacc.c:1646  */
    { symlist.back ().senum->tags.push_back ((yyvsp[0].cnst)); }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 255 "./parse.yy" /* yacc.c:1646  */
    { (yyval.cnst).id = (yyvsp[-2].str); (yyval.cnst).val = (yyvsp[0].str); }
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 256 "./parse.yy" /* yacc.c:1646  */
    { (yyval.cnst).id = (yyvsp[0].str); }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 260 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-1].str); (yyval.decl).type = (yyvsp[-2].str); (yyval.decl).qual = rpc_decl::SCALAR; }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 262 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-1].str); (yyval.decl).type = (yyvsp[-2].str); (yyval.decl).qual = rpc_decl::VEC;
	   (yyval.decl).bound = "RPC_INFINITY";
	   yywarn ("strings require variable-length array declarations");
	 }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 267 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-1].str); (yyval.decl).type = (yyvsp[-3].str); (yyval.decl).qual = rpc_decl::PTR; }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 269 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-4].str); (yyval.decl).type = (yyvsp[-5].str); (yyval.decl).qual = rpc_decl::ARRAY;
	   (yyval.decl).bound = (yyvsp[-2].str); }
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 272 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-4].str); (yyval.decl).type = (yyvsp[-5].str); (yyval.decl).qual = rpc_decl::ARRAY;
	   (yyval.decl).bound = (yyvsp[-2].str); }
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 275 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-4].str); (yyval.decl).type = (yyvsp[-5].str); (yyval.decl).qual = rpc_decl::VEC; (yyval.decl).bound = (yyvsp[-2].str); }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 277 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-4].str); (yyval.decl).type = (yyvsp[-5].str); (yyval.decl).qual = rpc_decl::VEC; (yyval.decl).bound = (yyvsp[-2].str); }
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 279 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-4].str); (yyval.decl).type = (yyvsp[-5].str); (yyval.decl).qual = rpc_decl::VEC; (yyval.decl).bound = (yyvsp[-2].str); }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 281 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-3].str); (yyval.decl).type = (yyvsp[-4].str); (yyval.decl).qual = rpc_decl::VEC;
	   (yyval.decl).bound = "RPC_INFINITY"; }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 284 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-3].str); (yyval.decl).type = (yyvsp[-4].str); (yyval.decl).qual = rpc_decl::VEC;
	   (yyval.decl).bound = "RPC_INFINITY"; }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 287 "./parse.yy" /* yacc.c:1646  */
    { (yyval.decl).id = (yyvsp[-3].str); (yyval.decl).type = (yyvsp[-4].str); (yyval.decl).qual = rpc_decl::VEC;
	   (yyval.decl).bound = "RPC_INFINITY"; }
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 291 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "void"; }
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 297 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "u_int32_t"; }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 298 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "int32_t"; }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 299 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "u_int32_t"; }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 300 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "int64_t"; }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 301 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "u_int64_t"; }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 302 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "double"; }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 303 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = "quadruple"; }
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 309 "./parse.yy" /* yacc.c:1646  */
    { (yyval.num) = strtoul ((yyvsp[0].str), NULL, 0); }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 312 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = getnewid ((yyvsp[0].str)); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 315 "./parse.yy" /* yacc.c:1646  */
    { (yyval.str) = getid ((yyvsp[0].str)); }
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1737 "y.tab.c" /* yacc.c:1646  */
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
#line 318 "./parse.yy" /* yacc.c:1906  */

symlist_t symlist;

static int
proc_compare (const void *_a, const void *_b)
{
  rpc_proc *a = (rpc_proc *) _a;
  rpc_proc *b = (rpc_proc *) _b;
  return a->val < b->val ? -1 : a->val != b->val;
}

static int
vers_compare (const void *_a, const void *_b)
{
  rpc_vers *a = (rpc_vers *) _a;
  rpc_vers *b = (rpc_vers *) _b;
  return a->val < b->val ? -1 : a->val != b->val;
}

void
checkliterals ()
{
  for (size_t i = 0; i < litq.size (); i++) {
    rpc_sym *s = &symlist.push_back ();
    s->settype (rpc_sym::LITERAL);
    *s->sliteral = litq[i];
  }
  litq.clear ();
}

static str
getnewid (str id)
{
  if (ids[id])
    yywarn ("redefinition of symbol " << id);
  else
    ids.insert (id);
  if (idprefix)
    id = idprefix << id;
  return id;
}

static str
getid (str id)
{
  if (idprefix && ids[id])
    id = idprefix << id;
  return id;
}
