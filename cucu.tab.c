/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"

    #include <stdio.h>
    #include <string.h> 
    #define YYSTYPE char*
    int yylex(void);
    void yyerror(char *s);

#line 79 "cucu.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cucu.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_PLUS = 4,                       /* PLUS  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_SUB = 7,                        /* SUB  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_INCREMENT = 10,                 /* INCREMENT  */
  YYSYMBOL_LESSTHAN = 11,                  /* LESSTHAN  */
  YYSYMBOL_GREATERTHAN = 12,               /* GREATERTHAN  */
  YYSYMBOL_LESSEQ = 13,                    /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 14,                 /* GREATEREQ  */
  YYSYMBOL_OPENPARANTHESIS = 15,           /* OPENPARANTHESIS  */
  YYSYMBOL_CLOSEPARANTHESIS = 16,          /* CLOSEPARANTHESIS  */
  YYSYMBOL_OPENSQUARE = 17,                /* OPENSQUARE  */
  YYSYMBOL_CLOSESQUARE = 18,               /* CLOSESQUARE  */
  YYSYMBOL_OPENBRACES = 19,                /* OPENBRACES  */
  YYSYMBOL_CLOSEBRACES = 20,               /* CLOSEBRACES  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_EQUALS = 22,                    /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 23,                 /* NOTEQUALS  */
  YYSYMBOL_TYPE = 24,                      /* TYPE  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_RETURN = 28,                    /* RETURN  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_SEMI = 30,                      /* SEMI  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_vardec = 35,                    /* vardec  */
  YYSYMBOL_funcdec = 36,                   /* funcdec  */
  YYSYMBOL_funcargs = 37,                  /* funcargs  */
  YYSYMBOL_funcdef = 38,                   /* funcdef  */
  YYSYMBOL_stmts = 39,                     /* stmts  */
  YYSYMBOL_stmt = 40,                      /* stmt  */
  YYSYMBOL_assignment = 41,                /* assignment  */
  YYSYMBOL_returnstmt = 42,                /* returnstmt  */
  YYSYMBOL_ifstmt = 43,                    /* ifstmt  */
  YYSYMBOL_whilestmt = 44,                 /* whilestmt  */
  YYSYMBOL_forstmt = 45,                   /* forstmt  */
  YYSYMBOL_funccall = 46,                  /* funccall  */
  YYSYMBOL_incrementstmt = 47,             /* incrementstmt  */
  YYSYMBOL_vardec2 = 48,                   /* vardec2  */
  YYSYMBOL_funcargs2 = 49,                 /* funcargs2  */
  YYSYMBOL_boolexpr = 50,                  /* boolexpr  */
  YYSYMBOL_expr = 51,                      /* expr  */
  YYSYMBOL_term = 52,                      /* term  */
  YYSYMBOL_factor = 53                     /* factor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   321

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    11,    11,    13,    15,    17,    19,    21,    23,    25,
      27,    30,    32,    34,    37,    39,    42,    44,    46,    48,
      51,    53,    55,    57,    60,    62,    65,    67,    69,    71,
      73,    75,    77,    79,    82,    84,    86,    89,    91,    93,
      95,    98,   100,   102,   105,   108,   111,   113,   115,   118,
     121,   123,   126,   128,   130,   132,   134,   137,   139,   141,
     143,   145,   147,   149,   152,   154,   156,   159,   161,   163,
     166,   168,   170,   172
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "PLUS", "MUL",
  "DIV", "SUB", "STRING", "FOR", "INCREMENT", "LESSTHAN", "GREATERTHAN",
  "LESSEQ", "GREATEREQ", "OPENPARANTHESIS", "CLOSEPARANTHESIS",
  "OPENSQUARE", "CLOSESQUARE", "OPENBRACES", "CLOSEBRACES", "ASSIGN",
  "EQUALS", "NOTEQUALS", "TYPE", "IF", "ELSE", "WHILE", "RETURN", "ID",
  "SEMI", "COMMA", "AND", "$accept", "program", "vardec", "funcdec",
  "funcargs", "funcdef", "stmts", "stmt", "assignment", "returnstmt",
  "ifstmt", "whilestmt", "forstmt", "funccall", "incrementstmt", "vardec2",
  "funcargs2", "boolexpr", "expr", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-17)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-64)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     266,   -13,    -9,    34,    50,     2,    52,    12,   -17,   -17,
     -17,   272,   -17,   -17,   -17,     1,   -17,   -17,   -17,   -17,
     -17,    55,   -12,    43,    43,   -17,    70,    43,   -17,   -17,
      18,   152,   -17,    80,    39,    66,   -17,   -17,   -17,   -17,
     272,   -17,    53,   129,   -17,    79,   103,   115,     0,    98,
     -17,   -17,   118,   298,   136,   -17,   117,    43,    43,   -17,
      43,    43,    43,   -17,    -3,   135,   139,    28,   160,   159,
     124,   161,   174,   162,    13,   111,    66,   272,   178,    36,
      43,   -15,    45,   180,   167,   149,   182,    43,    43,    43,
      43,    43,    43,   183,   -17,   152,   152,    85,   -17,   -17,
     111,   272,   -17,   202,   198,   168,   111,    43,   -17,   111,
     -17,    98,   -17,   194,   158,    43,    43,   195,   272,   -17,
      78,   111,   -17,   -17,    43,   272,    71,    71,    71,    71,
      71,    71,   272,   -17,   -17,   179,   272,   197,   -17,   -17,
      73,   211,    22,   -17,   -17,   215,     7,   201,   185,   272,
     -17,   234,    86,   191,   208,   -17,   214,   -17,   -17,   221,
     235,   245,   240,   -17,   220,   223,   -17,   -17,   -17,   -17,
     -17,   272,   241,   -17,   -17,   237,   272,   233,   243,   260,
     -17,   272,   249,   -17
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    25,    26,    27,    28,    29,    32,    30,    33,
      31,     0,     0,     0,     0,    71,    73,     0,    72,    40,
       0,    66,    69,     0,     0,     0,     1,     2,     3,     4,
       6,     5,     0,     0,    24,     0,     0,     0,     0,     0,
      11,    73,     0,    63,     0,    39,     0,     0,     0,    38,
       0,     0,     0,    49,    73,     0,    19,     0,     0,     0,
      54,    73,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    64,    65,     0,    67,    68,
       0,     0,    18,     0,     0,     0,     0,     0,    34,     0,
      13,     0,    50,     0,     0,     0,     0,     0,     0,    15,
       0,     0,    12,    36,     0,     0,    59,    61,    60,    62,
      57,    58,     0,    37,    55,     0,     0,    17,    48,    52,
       0,     0,     0,    35,    42,     0,     0,     0,     0,     0,
      14,     0,     0,     0,     0,    22,     0,    16,    53,     0,
       0,     0,     0,    21,     0,     0,    51,    41,    44,    23,
      47,     0,     0,    20,    46,     0,     0,     0,     0,     0,
      45,     0,     0,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -17,   -17,   273,   275,   236,   276,    -7,    -5,   -17,   -17,
     -17,   -17,   -17,   278,   140,   265,    75,   -16,    -4,    65,
     104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,     9,    67,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    68,    69,    53,    31,
      32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    30,    21,    48,   118,    25,    44,    52,    54,    49,
      26,    57,    36,   -56,    58,   119,    81,    27,    50,    73,
      22,     1,    57,    56,    66,    58,    57,    45,   100,    58,
      70,    28,    29,    84,   111,    44,     2,     3,   124,     4,
       5,     6,    25,   112,   103,    85,    25,    64,    59,    23,
      60,    51,   123,   124,    27,    65,    97,   116,    27,   104,
     113,   120,    33,    66,   117,    24,   112,    34,    28,    25,
     114,    70,    28,    35,    71,    57,   104,    57,    58,    46,
      58,    27,    74,   126,   127,   128,   129,   130,   131,    57,
      57,   158,    58,    58,   135,    72,    70,   149,    77,   145,
      55,    25,    70,   140,    78,    70,    51,   142,   150,    44,
      63,   148,   146,    27,    25,   133,   166,    70,   153,    64,
     152,    57,    95,    96,    58,   154,    27,    83,    57,   156,
      44,    58,    79,    94,    86,    87,    88,    89,    90,    33,
      28,   107,   164,    44,    75,    80,    91,    92,    44,    44,
      76,    44,    93,    57,   101,   -63,    58,    61,    62,    44,
      87,    88,    89,    90,   175,    98,    99,     1,   102,   178,
      44,    91,    92,    44,   182,   134,   105,    44,   144,   123,
     124,   139,    42,     3,   141,     4,     5,    43,     1,   109,
     106,   108,   110,   115,     1,   121,   151,   122,   138,   155,
       1,   125,   132,    42,     3,   163,     4,     5,    43,    42,
       3,   167,     4,     5,    43,    42,     3,     1,     4,     5,
      43,   136,   137,     1,   143,   147,   157,   159,   168,     1,
     161,   160,    42,     3,   169,     4,     5,    43,    42,     3,
     173,     4,     5,    43,    42,     3,     1,     4,     5,    43,
     165,   170,     1,   174,   171,    33,   172,   177,     1,   179,
     176,    42,     3,   180,     4,     5,    43,    42,     3,   183,
       4,     5,    43,    42,     3,     1,     4,     5,    43,   181,
      37,     1,    38,    39,    82,    41,    47,   162,     0,     0,
       2,     3,     0,     4,     5,     6,    42,     3,     0,     4,
       5,    43,    57,     0,     0,    58,     0,     0,     0,    87,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
      91,    92
};

static const yytype_int16 yycheck[] =
{
       7,     5,    15,    15,    19,     3,    11,    23,    24,    21,
       8,     4,     0,    16,     7,    30,    16,    15,    30,    35,
      29,     9,     4,    27,    24,     7,     4,    26,    31,     7,
      34,    29,    30,    49,    21,    40,    24,    25,    31,    27,
      28,    29,     3,    30,    16,    49,     3,     8,    30,    15,
      32,     8,    30,    31,    15,    16,    60,    21,    15,    31,
      76,    16,    10,    24,    80,    15,    30,    15,    29,     3,
      77,    75,    29,    21,     8,     4,    31,     4,     7,    24,
       7,    15,    29,    87,    88,    89,    90,    91,    92,     4,
       4,    18,     7,     7,   101,    29,   100,    19,    19,   115,
      30,     3,   106,   107,    25,   109,     8,   111,    30,   114,
      30,   118,   116,    15,     3,    30,    30,   121,   125,     8,
     124,     4,    57,    58,     7,   132,    15,    29,     4,   136,
     135,     7,    29,    16,    16,    11,    12,    13,    14,    10,
      29,    17,   149,   148,    15,    30,    22,    23,   153,   154,
      21,   156,    16,     4,    19,    31,     7,     5,     6,   164,
      11,    12,    13,    14,   171,    61,    62,     9,    29,   176,
     175,    22,    23,   178,   181,   100,    16,   182,    20,    30,
      31,   106,    24,    25,   109,    27,    28,    29,     9,    15,
      31,    30,    30,    15,     9,    15,   121,    30,    30,    20,
       9,    19,    19,    24,    25,    20,    27,    28,    29,    24,
      25,    20,    27,    28,    29,    24,    25,     9,    27,    28,
      29,    19,    24,     9,    30,    30,    29,    16,    20,     9,
      29,    16,    24,    25,    20,    27,    28,    29,    24,    25,
      20,    27,    28,    29,    24,    25,     9,    27,    28,    29,
      16,    30,     9,    30,    19,    10,    16,    20,     9,    26,
      19,    24,    25,    20,    27,    28,    29,    24,    25,    20,
      27,    28,    29,    24,    25,     9,    27,    28,    29,    19,
       7,     9,     7,     7,    48,     7,    21,   147,    -1,    -1,
      24,    25,    -1,    27,    28,    29,    24,    25,    -1,    27,
      28,    29,     4,    -1,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    24,    25,    27,    28,    29,    34,    35,    36,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    15,    29,    15,    15,     3,     8,    15,    29,    30,
      51,    52,    53,    10,    15,    21,     0,    35,    36,    38,
      39,    46,    24,    29,    40,    26,    24,    48,    15,    21,
      30,     8,    50,    51,    50,    30,    51,     4,     7,    30,
      32,     5,     6,    30,     8,    16,    24,    37,    49,    50,
      51,     8,    29,    50,    29,    15,    21,    19,    25,    29,
      30,    16,    37,    29,    50,    51,    16,    11,    12,    13,
      14,    22,    23,    16,    16,    52,    52,    51,    53,    53,
      31,    19,    29,    16,    31,    16,    31,    17,    30,    15,
      30,    21,    30,    50,    39,    15,    21,    50,    19,    30,
      16,    15,    30,    30,    31,    19,    51,    51,    51,    51,
      51,    51,    19,    30,    49,    39,    19,    24,    30,    49,
      51,    49,    51,    30,    20,    50,    51,    30,    39,    19,
      30,    49,    51,    39,    39,    20,    39,    29,    18,    16,
      16,    29,    47,    20,    39,    16,    30,    20,    20,    20,
      30,    19,    16,    20,    30,    39,    19,    20,    39,    26,
      20,    19,    39,    20
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    35,    35,    35,    36,    36,    37,    37,    37,    37,
      38,    38,    38,    38,    39,    39,    40,    40,    40,    40,
      40,    40,    40,    40,    41,    41,    41,    42,    42,    42,
      42,    43,    43,    43,    44,    45,    46,    46,    46,    47,
      48,    48,    49,    49,    49,    49,    49,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    51,    52,    52,    52,
      53,    53,    53,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     3,     5,     4,     6,     5,     4,     3,     2,     1,
       8,     7,     6,     7,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     5,     5,     3,     3,
       2,     7,     5,    13,     7,    11,     8,     7,     5,     3,
       3,     7,     3,     4,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: program vardec  */
#line 11 "cucu.y"
                    {fprintf(stdout," : Variable declaration\n");}
#line 1258 "cucu.tab.c"
    break;

  case 3: /* program: program funcdec  */
#line 13 "cucu.y"
                    {fprintf(stdout," : Function declaration\n");}
#line 1264 "cucu.tab.c"
    break;

  case 4: /* program: program funcdef  */
#line 15 "cucu.y"
                    {fprintf(stdout," : Function definition\n");}
#line 1270 "cucu.tab.c"
    break;

  case 5: /* program: program funccall  */
#line 17 "cucu.y"
                     {fprintf(stdout," : Function Call\n");}
#line 1276 "cucu.tab.c"
    break;

  case 6: /* program: program stmts  */
#line 19 "cucu.y"
                      {fprintf(stdout," : Statement\n");}
#line 1282 "cucu.tab.c"
    break;

  case 7: /* program: vardec  */
#line 21 "cucu.y"
                {fprintf(stdout," : Variable declaration\n");}
#line 1288 "cucu.tab.c"
    break;

  case 8: /* program: funcdec  */
#line 23 "cucu.y"
                {fprintf(stdout," : Function declaration\n");}
#line 1294 "cucu.tab.c"
    break;

  case 9: /* program: funcdef  */
#line 25 "cucu.y"
                {fprintf(stdout," : Function definition\n");}
#line 1300 "cucu.tab.c"
    break;

  case 10: /* program: stmts  */
#line 27 "cucu.y"
                 {fprintf(stdout," : Statement\n");}
#line 1306 "cucu.tab.c"
    break;

  case 12: /* vardec: TYPE ID ASSIGN boolexpr SEMI  */
#line 32 "cucu.y"
                                      {fprintf(stdout,"Global Variable : %s \n",yyvsp[-3]);}
#line 1312 "cucu.tab.c"
    break;

  case 13: /* vardec: ID ASSIGN boolexpr SEMI  */
#line 34 "cucu.y"
                                      {fprintf(stdout,"Global Variable : %s \n",yyvsp[-2]);}
#line 1318 "cucu.tab.c"
    break;

  case 14: /* funcdec: TYPE ID OPENPARANTHESIS funcargs CLOSEPARANTHESIS SEMI  */
#line 37 "cucu.y"
                                                            {fprintf(stdout,"Identifier : %s \n",yyvsp[-4]);}
#line 1324 "cucu.tab.c"
    break;

  case 15: /* funcdec: TYPE ID OPENPARANTHESIS CLOSEPARANTHESIS SEMI  */
#line 39 "cucu.y"
                                                    {fprintf(stdout,"Identifier : %s \n",yyvsp[-3]);}
#line 1330 "cucu.tab.c"
    break;

  case 16: /* funcargs: funcargs COMMA TYPE ID  */
#line 42 "cucu.y"
                            {fprintf(stdout,"Argument : %s \n",yyvsp[0]);}
#line 1336 "cucu.tab.c"
    break;

  case 18: /* funcargs: TYPE ID  */
#line 46 "cucu.y"
            {fprintf(stdout,"Argument : %s \n",yyvsp[0]);}
#line 1342 "cucu.tab.c"
    break;

  case 20: /* funcdef: TYPE ID OPENPARANTHESIS funcargs CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES  */
#line 51 "cucu.y"
                                                                                    {fprintf(stdout,"Identifier : %s \n",yyvsp[-6]);}
#line 1348 "cucu.tab.c"
    break;

  case 21: /* funcdef: TYPE ID OPENPARANTHESIS CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES  */
#line 53 "cucu.y"
                                                                                {fprintf(stdout,"Identifier : %s \n",yyvsp[-5]);}
#line 1354 "cucu.tab.c"
    break;

  case 22: /* funcdef: ID OPENPARANTHESIS CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES  */
#line 55 "cucu.y"
                                                                           {fprintf(stdout,"Identifier : %s \n",yyvsp[-5]);}
#line 1360 "cucu.tab.c"
    break;

  case 23: /* funcdef: ID OPENPARANTHESIS funcargs CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES  */
#line 57 "cucu.y"
                                                                               {fprintf(stdout,"Identifier : %s \n",yyvsp[-6]);}
#line 1366 "cucu.tab.c"
    break;

  case 26: /* stmt: assignment  */
#line 65 "cucu.y"
                {fprintf(stdout,"  : Assignment Statement\n");}
#line 1372 "cucu.tab.c"
    break;

  case 27: /* stmt: returnstmt  */
#line 67 "cucu.y"
                {fprintf(stdout," : Return Statement\n");}
#line 1378 "cucu.tab.c"
    break;

  case 28: /* stmt: ifstmt  */
#line 69 "cucu.y"
            {fprintf(stdout,"  : If-Else Statement\n");}
#line 1384 "cucu.tab.c"
    break;

  case 29: /* stmt: whilestmt  */
#line 71 "cucu.y"
                {fprintf(stdout,"  : While Statement\n");}
#line 1390 "cucu.tab.c"
    break;

  case 30: /* stmt: funccall  */
#line 73 "cucu.y"
                {fprintf(stdout,"  : Function Call\n");}
#line 1396 "cucu.tab.c"
    break;

  case 31: /* stmt: vardec2  */
#line 75 "cucu.y"
                {fprintf(stdout,"  : Local Variable Declaration\n");}
#line 1402 "cucu.tab.c"
    break;

  case 32: /* stmt: forstmt  */
#line 77 "cucu.y"
                {fprintf(stdout,"  : For Statement\n");}
#line 1408 "cucu.tab.c"
    break;

  case 33: /* stmt: incrementstmt  */
#line 79 "cucu.y"
                  {fprintf(stdout,"  : Increment Statement\n");}
#line 1414 "cucu.tab.c"
    break;

  case 35: /* assignment: ID ASSIGN boolexpr SEMI  */
#line 84 "cucu.y"
                                {fprintf(stdout," = %s \n",yyvsp[-3]);}
#line 1420 "cucu.tab.c"
    break;

  case 36: /* assignment: TYPE ID ASSIGN expr SEMI  */
#line 86 "cucu.y"
                                {fprintf(stdout," = %s \n",yyvsp[-3]);}
#line 1426 "cucu.tab.c"
    break;

  case 46: /* funccall: TYPE ID ASSIGN ID OPENPARANTHESIS funcargs2 CLOSEPARANTHESIS SEMI  */
#line 111 "cucu.y"
                                                                        {fprintf(stdout,"Identifier : %s \n",yyvsp[-6]);}
#line 1432 "cucu.tab.c"
    break;

  case 47: /* funccall: ID ASSIGN ID OPENPARANTHESIS funcargs2 CLOSEPARANTHESIS SEMI  */
#line 113 "cucu.y"
                                                                        {fprintf(stdout,"Identifier : %s \n",yyvsp[-5]);}
#line 1438 "cucu.tab.c"
    break;

  case 48: /* funccall: ID OPENPARANTHESIS funcargs2 CLOSEPARANTHESIS SEMI  */
#line 115 "cucu.y"
                                                                         {fprintf(stdout,"Identifier : %s \n",yyvsp[-3]);}
#line 1444 "cucu.tab.c"
    break;

  case 51: /* vardec2: TYPE ID ASSIGN expr COMMA expr SEMI  */
#line 123 "cucu.y"
                                        {fprintf(stdout,"Local Variable: %s %s \n",yyvsp[-3] ,yyvsp[-1]);}
#line 1450 "cucu.tab.c"
    break;

  case 52: /* funcargs2: boolexpr COMMA funcargs2  */
#line 126 "cucu.y"
                             {fprintf(stdout,"Argument :  \n");}
#line 1456 "cucu.tab.c"
    break;

  case 54: /* funcargs2: expr  */
#line 130 "cucu.y"
            {fprintf(stdout,"Argument : ");}
#line 1462 "cucu.tab.c"
    break;

  case 55: /* funcargs2: STRING COMMA funcargs2  */
#line 132 "cucu.y"
                            {fprintf(stdout,"Argument : \n");}
#line 1468 "cucu.tab.c"
    break;

  case 56: /* funcargs2: STRING  */
#line 134 "cucu.y"
            {fprintf(stdout,"Argument : ");}
#line 1474 "cucu.tab.c"
    break;

  case 57: /* boolexpr: expr EQUALS expr  */
#line 137 "cucu.y"
                      {fprintf(stdout,"Operator : == \n");}
#line 1480 "cucu.tab.c"
    break;

  case 58: /* boolexpr: expr NOTEQUALS expr  */
#line 139 "cucu.y"
                         {fprintf(stdout,"Operator : != \n");}
#line 1486 "cucu.tab.c"
    break;

  case 59: /* boolexpr: expr LESSTHAN expr  */
#line 141 "cucu.y"
                        {fprintf(stdout,"Operator :  < \n");}
#line 1492 "cucu.tab.c"
    break;

  case 60: /* boolexpr: expr LESSEQ expr  */
#line 143 "cucu.y"
                     {fprintf(stdout,"Operator :  <= \n");}
#line 1498 "cucu.tab.c"
    break;

  case 61: /* boolexpr: expr GREATERTHAN expr  */
#line 145 "cucu.y"
                          {fprintf(stdout,"Operator :  > \n");}
#line 1504 "cucu.tab.c"
    break;

  case 62: /* boolexpr: expr GREATEREQ expr  */
#line 147 "cucu.y"
                        {fprintf(stdout,"Operator :  >= \n");}
#line 1510 "cucu.tab.c"
    break;

  case 64: /* expr: expr PLUS term  */
#line 152 "cucu.y"
                    {fprintf(stdout,"Operator : + \n");}
#line 1516 "cucu.tab.c"
    break;

  case 65: /* expr: expr SUB term  */
#line 154 "cucu.y"
                    {fprintf(stdout,"Operator : - \n");}
#line 1522 "cucu.tab.c"
    break;

  case 67: /* term: term MUL factor  */
#line 159 "cucu.y"
                    {fprintf(stdout,"Operator : * \n");}
#line 1528 "cucu.tab.c"
    break;

  case 68: /* term: term DIV factor  */
#line 161 "cucu.y"
                    {fprintf(stdout,"Operator : / \n");}
#line 1534 "cucu.tab.c"
    break;

  case 71: /* factor: NUM  */
#line 168 "cucu.y"
             {fprintf(stdout,"Constant: %s \n",yyvsp[0]);}
#line 1540 "cucu.tab.c"
    break;

  case 72: /* factor: ID  */
#line 170 "cucu.y"
             {fprintf(stdout,"Variable: %s \n",yyvsp[0]);}
#line 1546 "cucu.tab.c"
    break;

  case 73: /* factor: STRING  */
#line 172 "cucu.y"
             {fprintf(stdout,"String: %s \n",yyvsp[0]);}
#line 1552 "cucu.tab.c"
    break;


#line 1556 "cucu.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 174 "cucu.y"


void yyerror(char *s) {
    fprintf(stdout,"%s \n", s);
}

int main(int argc, char * argv[])
{
    extern FILE *yyin, *yyout, *stdout;
    yyin=fopen(argv[1],"r");
    yyout=fopen("lexer.txt","w");
    stdout=fopen("parser.txt","w");
    yyparse();
    return 0;
}
