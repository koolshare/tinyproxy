/* A Bison parser, made by GNU Bison 1.875a.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_PORT = 258,
     KW_LISTEN = 259,
     KW_LOGFILE = 260,
     KW_PIDFILE = 261,
     KW_SYSLOG = 262,
     KW_MAXCLIENTS = 263,
     KW_MAXSPARESERVERS = 264,
     KW_MINSPARESERVERS = 265,
     KW_STARTSERVERS = 266,
     KW_MAXREQUESTSPERCHILD = 267,
     KW_TIMEOUT = 268,
     KW_USER = 269,
     KW_GROUP = 270,
     KW_ANONYMOUS = 271,
     KW_XTINYPROXY = 272,
     KW_FILTER = 273,
     KW_FILTERURLS = 274,
     KW_FILTEREXTENDED = 275,
     KW_FILTER_DEFAULT_DENY = 276,
     KW_FILTER_CASESENSITIVE = 277,
     KW_UPSTREAM = 278,
     KW_CONNECTPORT = 279,
     KW_BIND = 280,
     KW_STATHOST = 281,
     KW_ALLOW = 282,
     KW_DENY = 283,
     KW_ERRORPAGE = 284,
     KW_DEFAULT_ERRORPAGE = 285,
     KW_STATPAGE = 286,
     KW_VIA_PROXY_NAME = 287,
     KW_YES = 288,
     KW_NO = 289,
     KW_LOGLEVEL = 290,
     KW_LOG_CRITICAL = 291,
     KW_LOG_ERROR = 292,
     KW_LOG_WARNING = 293,
     KW_LOG_NOTICE = 294,
     KW_LOG_CONNECT = 295,
     KW_LOG_INFO = 296,
     IDENTIFIER = 297,
     NUMBER = 298,
     STRING = 299,
     NUMERIC_ADDRESS = 300,
     NETMASK_ADDRESS = 301
   };
#endif
#define KW_PORT 258
#define KW_LISTEN 259
#define KW_LOGFILE 260
#define KW_PIDFILE 261
#define KW_SYSLOG 262
#define KW_MAXCLIENTS 263
#define KW_MAXSPARESERVERS 264
#define KW_MINSPARESERVERS 265
#define KW_STARTSERVERS 266
#define KW_MAXREQUESTSPERCHILD 267
#define KW_TIMEOUT 268
#define KW_USER 269
#define KW_GROUP 270
#define KW_ANONYMOUS 271
#define KW_XTINYPROXY 272
#define KW_FILTER 273
#define KW_FILTERURLS 274
#define KW_FILTEREXTENDED 275
#define KW_FILTER_DEFAULT_DENY 276
#define KW_FILTER_CASESENSITIVE 277
#define KW_UPSTREAM 278
#define KW_CONNECTPORT 279
#define KW_BIND 280
#define KW_STATHOST 281
#define KW_ALLOW 282
#define KW_DENY 283
#define KW_ERRORPAGE 284
#define KW_DEFAULT_ERRORPAGE 285
#define KW_STATPAGE 286
#define KW_VIA_PROXY_NAME 287
#define KW_YES 288
#define KW_NO 289
#define KW_LOGLEVEL 290
#define KW_LOG_CRITICAL 291
#define KW_LOG_ERROR 292
#define KW_LOG_WARNING 293
#define KW_LOG_NOTICE 294
#define KW_LOG_CONNECT 295
#define KW_LOG_INFO 296
#define IDENTIFIER 297
#define NUMBER 298
#define STRING 299
#define NUMERIC_ADDRESS 300
#define NETMASK_ADDRESS 301




/* Copy the first part of user declarations.  */
#line 20 "grammar.y"


#include "tinyproxy.h"

#include "acl.h"
#include "anonymous.h"
#include "child.h"
#include "filter.h"
#include "htmlerror.h"
#include "log.h"
#include "reqs.h"

void yyerror(char *s);
int yylex(void);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 37 "grammar.y"
typedef union YYSTYPE {
	unsigned int num;
	char *cptr;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 190 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 202 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   83

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  9
/* YYNRULES -- Number of rules. */
#define YYNRULES  53
/* YYNRULES -- Number of states. */
#define YYNSTATES  91

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    15,    18,    21,
      24,    27,    30,    33,    36,    39,    42,    45,    48,    51,
      55,    58,    61,    64,    67,    70,    73,    76,    79,    84,
      90,    94,    97,   100,   103,   106,   109,   112,   115,   118,
     120,   122,   124,   126,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      50,     0,    -1,    -1,    50,    51,    -1,    47,    -1,    52,
      47,    -1,     3,    43,    -1,    13,    43,    -1,     7,    56,
      -1,     8,    43,    -1,     9,    43,    -1,    10,    43,    -1,
      11,    43,    -1,    12,    43,    -1,     5,    57,    -1,     6,
      57,    -1,    14,    57,    -1,    15,    57,    -1,    16,    57,
      -1,    29,    43,    57,    -1,    30,    57,    -1,    31,    57,
      -1,    18,    57,    -1,    19,    56,    -1,    20,    56,    -1,
      22,    56,    -1,    21,    56,    -1,    17,    54,    -1,    23,
      55,    48,    43,    -1,    23,    55,    48,    43,    44,    -1,
      34,    23,    44,    -1,     4,    45,    -1,    27,    54,    -1,
      28,    54,    -1,    35,    53,    -1,    24,    43,    -1,    25,
      45,    -1,    32,    57,    -1,    26,    57,    -1,    36,    -1,
      37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,
      55,    -1,    46,    -1,    42,    -1,    45,    -1,    33,    -1,
      34,    -1,    43,    -1,    42,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned char yyrline[] =
{
       0,    81,    81,    83,    87,    88,    92,    93,    94,   102,
     103,   104,   105,   106,   107,   114,   115,   116,   117,   118,
     119,   120,   121,   129,   137,   145,   153,   162,   170,   178,
     186,   194,   199,   200,   201,   202,   203,   212,   217,   225,
     226,   227,   228,   229,   230,   234,   235,   239,   240,   244,
     245,   246,   250,   251
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_PORT", "KW_LISTEN", "KW_LOGFILE", 
  "KW_PIDFILE", "KW_SYSLOG", "KW_MAXCLIENTS", "KW_MAXSPARESERVERS", 
  "KW_MINSPARESERVERS", "KW_STARTSERVERS", "KW_MAXREQUESTSPERCHILD", 
  "KW_TIMEOUT", "KW_USER", "KW_GROUP", "KW_ANONYMOUS", "KW_XTINYPROXY", 
  "KW_FILTER", "KW_FILTERURLS", "KW_FILTEREXTENDED", 
  "KW_FILTER_DEFAULT_DENY", "KW_FILTER_CASESENSITIVE", "KW_UPSTREAM", 
  "KW_CONNECTPORT", "KW_BIND", "KW_STATHOST", "KW_ALLOW", "KW_DENY", 
  "KW_ERRORPAGE", "KW_DEFAULT_ERRORPAGE", "KW_STATPAGE", 
  "KW_VIA_PROXY_NAME", "KW_YES", "KW_NO", "KW_LOGLEVEL", 
  "KW_LOG_CRITICAL", "KW_LOG_ERROR", "KW_LOG_WARNING", "KW_LOG_NOTICE", 
  "KW_LOG_CONNECT", "KW_LOG_INFO", "IDENTIFIER", "NUMBER", "STRING", 
  "NUMERIC_ADDRESS", "NETMASK_ADDRESS", "'\\n'", "':'", "$accept", 
  "start", "line", "statement", "loglevels", "network_address", 
  "unique_address", "yesno", "string", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    10,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    49,    50,    50,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    56,    57,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     5,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     3,     0,     6,    31,
      52,    53,    14,    15,    49,    50,    51,     8,     9,    10,
      11,    12,    13,     7,    16,    17,    18,    47,    48,    46,
      27,    45,    22,    23,    24,    26,    25,     0,    35,    36,
      38,    32,    33,     0,    20,    21,    37,     0,    39,    40,
      41,    42,    43,    44,    34,     5,     0,    19,    30,    28,
      29
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     1,    36,    37,    84,    60,    61,    47,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -42
static const yysigned_char yypact[] =
{
     -42,    27,   -42,   -38,   -41,   -21,   -21,   -32,   -24,    17,
      29,    30,    32,    33,   -21,   -21,   -21,   -39,   -21,   -32,
     -32,   -32,   -32,    26,    34,    24,   -21,   -39,   -39,    35,
     -21,   -21,   -21,    -1,   -23,   -42,   -42,    23,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,    31,   -42,   -42,
     -42,   -42,   -42,   -21,   -42,   -42,   -42,    36,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,    38,   -42,   -42,    39,
     -42
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -42,   -42,   -42,   -42,   -42,     1,    59,    44,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned char yytable[] =
{
      43,    44,    45,    57,    39,    38,    58,    59,    54,    55,
      56,    46,    62,    78,    79,    80,    81,    82,    83,    48,
      70,    40,    77,    41,    74,    75,    76,     2,    71,    72,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      49,    33,    34,    63,    64,    65,    66,    87,    57,    69,
      85,    58,    50,    51,    35,    52,    53,    68,    73,    86,
      88,    89,    67,    90
};

static const unsigned char yycheck[] =
{
       6,    33,    34,    42,    45,    43,    45,    46,    14,    15,
      16,    43,    18,    36,    37,    38,    39,    40,    41,    43,
      26,    42,    23,    44,    30,    31,    32,     0,    27,    28,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      43,    34,    35,    19,    20,    21,    22,    73,    42,    45,
      47,    45,    43,    43,    47,    43,    43,    43,    43,    48,
      44,    43,    23,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    50,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    34,    35,    47,    51,    52,    43,    45,
      42,    44,    57,    57,    33,    34,    43,    56,    43,    43,
      43,    43,    43,    43,    57,    57,    57,    42,    45,    46,
      54,    55,    57,    56,    56,    56,    56,    55,    43,    45,
      57,    54,    54,    43,    57,    57,    57,    23,    36,    37,
      38,    39,    40,    41,    53,    47,    48,    57,    44,    43,
      44
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 92 "grammar.y"
    { config.port = yyvsp[0].num; }
    break;

  case 7:
#line 93 "grammar.y"
    { config.idletimeout = yyvsp[0].num; }
    break;

  case 8:
#line 95 "grammar.y"
    {
#ifdef HAVE_SYSLOG_H
	          config.syslog = yyvsp[0].num;
#else
		  log_message(LOG_WARNING, "Syslog support was not compiled in.");
#endif
	  }
    break;

  case 9:
#line 102 "grammar.y"
    { child_configure(CHILD_MAXCLIENTS, yyvsp[0].num); }
    break;

  case 10:
#line 103 "grammar.y"
    { child_configure(CHILD_MAXSPARESERVERS, yyvsp[0].num); }
    break;

  case 11:
#line 104 "grammar.y"
    { child_configure(CHILD_MINSPARESERVERS, yyvsp[0].num); }
    break;

  case 12:
#line 105 "grammar.y"
    { child_configure(CHILD_STARTSERVERS, yyvsp[0].num); }
    break;

  case 13:
#line 106 "grammar.y"
    { child_configure(CHILD_MAXREQUESTSPERCHILD, yyvsp[0].num); }
    break;

  case 14:
#line 108 "grammar.y"
    {
	          config.logf_name = yyvsp[0].cptr;
		  if (!config.logf_name) {
		          fprintf(stderr, "bad log file\n");
		  }
	  }
    break;

  case 15:
#line 114 "grammar.y"
    { config.pidpath = yyvsp[0].cptr; }
    break;

  case 16:
#line 115 "grammar.y"
    { config.username = yyvsp[0].cptr; }
    break;

  case 17:
#line 116 "grammar.y"
    { config.group = yyvsp[0].cptr; }
    break;

  case 18:
#line 117 "grammar.y"
    { anonymous_insert(yyvsp[0].cptr); }
    break;

  case 19:
#line 118 "grammar.y"
    { add_new_errorpage(yyvsp[0].cptr, yyvsp[-1].num); }
    break;

  case 20:
#line 119 "grammar.y"
    { config.errorpage_undef = yyvsp[0].cptr; }
    break;

  case 21:
#line 120 "grammar.y"
    { config.statpage = yyvsp[0].cptr; }
    break;

  case 22:
#line 122 "grammar.y"
    {
#ifdef FILTER_ENABLE
		  config.filter = yyvsp[0].cptr;
#else
	          log_message(LOG_WARNING, "Filter support was not compiled in.");
#endif
	  }
    break;

  case 23:
#line 130 "grammar.y"
    {
#ifdef FILTER_ENABLE
		  config.filter_url = yyvsp[0].num;
#else
		  log_message(LOG_WARNING, "Filter support wss not compiled in.");
#endif
	  }
    break;

  case 24:
#line 138 "grammar.y"
    {
#ifdef FILTER_ENABLE
		  config.filter_extended = yyvsp[0].num;
#else
		  log_message(LOG_WARNING, "Filter support was not compiled in.");
#endif
	  }
    break;

  case 25:
#line 146 "grammar.y"
    {
#ifdef FILTER_ENABLE
		  config.filter_casesensitive = yyvsp[0].num;
#else
		  log_message(LOG_WARNING, "Filter support was not compiled in.");
#endif
	  }
    break;

  case 26:
#line 154 "grammar.y"
    {
#ifdef FILTER_ENABLE
		  if (yyvsp[0].num)
			  filter_set_default_policy(FILTER_DEFAULT_DENY);
#else
		  log_message(LOG_WARNING, "FIlter support was not compiled in.");
#endif
	  }
    break;

  case 27:
#line 163 "grammar.y"
    {
#ifdef XTINYPROXY_ENABLE
	   	  config.my_domain = yyvsp[0].cptr;
#else
		  log_message(LOG_WARNING, "X-Tinyproxy header support was not compiled in.");
#endif
	   }
    break;

  case 28:
#line 171 "grammar.y"
    {
#ifdef UPSTREAM_SUPPORT
		  upstream_add(yyvsp[-2].cptr, yyvsp[0].num, NULL);
#else
                  log_message(LOG_WARNING, "Upstream proxy support was not compiled in.");
#endif
          }
    break;

  case 29:
#line 179 "grammar.y"
    {
#ifdef UPSTREAM_SUPPORT
		  upstream_add(yyvsp[-3].cptr, yyvsp[-1].num, yyvsp[0].cptr);
#else
                  log_message(LOG_WARNING, "Upstream proxy support was not compiled in.");
#endif
	  }
    break;

  case 30:
#line 187 "grammar.y"
    {
#ifdef UPSTREAM_SUPPORT
		  upstream_add(NULL, 0, yyvsp[0].cptr);
#else
                  log_message(LOG_WARNING, "Upstream proxy support was not compiled in.");
#endif
	  }
    break;

  case 31:
#line 195 "grammar.y"
    {
		  log_message(LOG_INFO, "Establishing listening socket on IP %s", yyvsp[0].cptr);
                  config.ipAddr = yyvsp[0].cptr;
          }
    break;

  case 32:
#line 199 "grammar.y"
    { insert_acl(yyvsp[0].cptr, ACL_ALLOW); }
    break;

  case 33:
#line 200 "grammar.y"
    { insert_acl(yyvsp[0].cptr, ACL_DENY); }
    break;

  case 34:
#line 201 "grammar.y"
    { set_log_level(yyvsp[0].num); }
    break;

  case 35:
#line 202 "grammar.y"
    { add_connect_port_allowed(yyvsp[0].num); }
    break;

  case 36:
#line 204 "grammar.y"
    {
#ifndef TRANSPARENT_PROXY
		  log_message(LOG_INFO, "Binding outgoing connections to %s", yyvsp[0].cptr);
	          config.bind_address = yyvsp[0].cptr;
#else
		  log_message(LOG_WARNING, "The 'Bind' directive can not be used with transparent proxy support.  Ignoring the directive.");
#endif
          }
    break;

  case 37:
#line 213 "grammar.y"
    {
		  log_message(LOG_INFO, "Setting \"Via\" proxy name to: %s", yyvsp[0].cptr);
		  config.via_proxy_name = yyvsp[0].cptr;
          }
    break;

  case 38:
#line 218 "grammar.y"
    {
		  log_message(LOG_INFO, "Stathost is set to \"%s\"", yyvsp[0].cptr);
		  config.stathost = yyvsp[0].cptr;
	  }
    break;

  case 39:
#line 225 "grammar.y"
    { yyval.num = LOG_CRIT; }
    break;

  case 40:
#line 226 "grammar.y"
    { yyval.num = LOG_ERR; }
    break;

  case 41:
#line 227 "grammar.y"
    { yyval.num = LOG_WARNING; }
    break;

  case 42:
#line 228 "grammar.y"
    { yyval.num = LOG_NOTICE; }
    break;

  case 43:
#line 229 "grammar.y"
    { yyval.num = LOG_CONN; }
    break;

  case 44:
#line 230 "grammar.y"
    { yyval.num = LOG_INFO; }
    break;

  case 49:
#line 244 "grammar.y"
    { yyval.num = 1; }
    break;

  case 50:
#line 245 "grammar.y"
    { yyval.num = 0; }
    break;

  case 51:
#line 246 "grammar.y"
    { yyval.num = yyvsp[0].num; }
    break;


    }

/* Line 999 of yacc.c.  */
#line 1453 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 254 "grammar.y"


extern int yylineno;

void
yyerror(char *s)
{
	static int headerdisplayed = 0;

	if (!headerdisplayed) {
		fprintf(stderr, "Errors in configuration file:\n");
		headerdisplayed = 1;
	}

	fprintf(stderr, "\t%s:%d: %s\n", config.config_file, yylineno, s);
	exit(EXIT_FAILURE);
}

