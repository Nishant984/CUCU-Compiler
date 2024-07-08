%{
    #include <stdio.h>
    #include <string.h> 
    #define YYSTYPE char*
    int yylex(void);
    void yyerror(char *s);
%}
%token NUM PLUS MUL DIV SUB STRING FOR INCREMENT LESSTHAN GREATERTHAN LESSEQ GREATEREQ OPENPARANTHESIS CLOSEPARANTHESIS OPENSQUARE CLOSESQUARE OPENBRACES CLOSEBRACES ASSIGN EQUALS NOTEQUALS TYPE IF ELSE WHILE RETURN ID SEMI COMMA AND
%%
program:
    program vardec  {fprintf(stdout," : Variable declaration\n");}
    |
    program funcdec {fprintf(stdout," : Function declaration\n");}
    |
    program funcdef {fprintf(stdout," : Function definition\n");}
    |
    program funccall {fprintf(stdout," : Function Call\n");}
    |
    program stmts     {fprintf(stdout," : Statement\n");}
    |
    vardec      {fprintf(stdout," : Variable declaration\n");}
    |
    funcdec     {fprintf(stdout," : Function declaration\n");}
    |
    funcdef     {fprintf(stdout," : Function definition\n");}
    |
    stmts        {fprintf(stdout," : Statement\n");}
    ;
vardec:
    TYPE ID SEMI
    |
    TYPE ID ASSIGN boolexpr SEMI      {fprintf(stdout,"Global Variable : %s \n",$2);}
    |
    ID ASSIGN boolexpr SEMI           {fprintf(stdout,"Global Variable : %s \n",$2);}
    ;
funcdec:
    TYPE ID OPENPARANTHESIS funcargs CLOSEPARANTHESIS SEMI  {fprintf(stdout,"Identifier : %s \n",$2);}
    |
    TYPE ID OPENPARANTHESIS CLOSEPARANTHESIS SEMI   {fprintf(stdout,"Identifier : %s \n",$2);}
    ;
funcargs:
    funcargs COMMA TYPE ID  {fprintf(stdout,"Argument : %s \n",$4);}
    |
    funcargs COMMA TYPE
    |
    TYPE ID {fprintf(stdout,"Argument : %s \n",$2);}
    |
    TYPE
    ;
funcdef:
    TYPE ID OPENPARANTHESIS funcargs CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES  {fprintf(stdout,"Identifier : %s \n",$2);}
    |
    TYPE ID OPENPARANTHESIS CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES       {fprintf(stdout,"Identifier : %s \n",$2);}
    |
    ID OPENPARANTHESIS CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES       {fprintf(stdout,"Identifier : %s \n",$1);}
    |
    ID OPENPARANTHESIS funcargs CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES  {fprintf(stdout,"Identifier : %s \n",$1);}
    ;
stmts:
    stmts stmt
    |
    stmt
    ;
stmt:
    assignment  {fprintf(stdout,"  : Assignment Statement\n");}
    |
    returnstmt  {fprintf(stdout," : Return Statement\n");}
    |
    ifstmt  {fprintf(stdout,"  : If-Else Statement\n");}
    |
    whilestmt   {fprintf(stdout,"  : While Statement\n");}
    |
    funccall    {fprintf(stdout,"  : Function Call\n");}
    |
    vardec2     {fprintf(stdout,"  : Local Variable Declaration\n");}
    |
    forstmt     {fprintf(stdout,"  : For Statement\n");}
    |
    incrementstmt {fprintf(stdout,"  : Increment Statement\n");}
    ;
assignment:
    ID ASSIGN STRING SEMI
    |
    ID ASSIGN boolexpr SEMI     {fprintf(stdout," = %s \n",$1);}
    |
    TYPE ID ASSIGN expr SEMI    {fprintf(stdout," = %s \n",$2);}
    ;
returnstmt:
    RETURN expr AND expr SEMI
    |
    RETURN expr SEMI 
    |
    RETURN STRING SEMI
    |
    RETURN SEMI
    ;
ifstmt:
    IF OPENPARANTHESIS boolexpr CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES
    |
    ifstmt ELSE OPENBRACES stmts CLOSEBRACES
    |
    ifstmt ELSE IF OPENPARANTHESIS boolexpr CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES ELSE OPENBRACES stmts CLOSEBRACES
    ;
whilestmt:
    WHILE OPENPARANTHESIS boolexpr CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES
    ;
forstmt:
    FOR OPENPARANTHESIS vardec2 SEMI boolexpr SEMI incrementstmt CLOSEPARANTHESIS OPENBRACES stmts CLOSEBRACES
    ;
funccall:
    TYPE ID ASSIGN ID OPENPARANTHESIS funcargs2 CLOSEPARANTHESIS SEMI   {fprintf(stdout,"Identifier : %s \n",$2);}
    |
    ID ASSIGN ID OPENPARANTHESIS funcargs2 CLOSEPARANTHESIS SEMI        {fprintf(stdout,"Identifier : %s \n",$2);}
    |
    ID OPENPARANTHESIS funcargs2 CLOSEPARANTHESIS SEMI                   {fprintf(stdout,"Identifier : %s \n",$2);}
;
incrementstmt:
    ID INCREMENT SEMI
;
vardec2:
    TYPE ID SEMI
    |
    TYPE ID ASSIGN expr COMMA expr SEMI {fprintf(stdout,"Local Variable: %s %s \n",$4 ,$6);}
;
funcargs2:
    boolexpr COMMA funcargs2 {fprintf(stdout,"Argument :  \n");}
    |
    expr OPENSQUARE expr CLOSESQUARE
    |
    expr    {fprintf(stdout,"Argument : ");}
    |
    STRING COMMA funcargs2  {fprintf(stdout,"Argument : \n");}
    |
    STRING  {fprintf(stdout,"Argument : ");}
;
boolexpr:
    expr EQUALS expr  {fprintf(stdout,"Operator : == \n");}
    |
    expr NOTEQUALS expr  {fprintf(stdout,"Operator : != \n");}
    |
    expr LESSTHAN expr  {fprintf(stdout,"Operator :  < \n");}
    |
    expr LESSEQ expr {fprintf(stdout,"Operator :  <= \n");}
    |
    expr GREATERTHAN expr {fprintf(stdout,"Operator :  > \n");}
    |
    expr GREATEREQ expr {fprintf(stdout,"Operator :  >= \n");}
    |
    expr
    ;
expr:
expr PLUS term      {fprintf(stdout,"Operator : + \n");} 
|
expr SUB term       {fprintf(stdout,"Operator : - \n");}
|
term                
;
term:
term MUL factor     {fprintf(stdout,"Operator : * \n");}
|
term DIV factor     {fprintf(stdout,"Operator : / \n");}
|
factor              
;
factor:
OPENPARANTHESIS expr CLOSEPARANTHESIS     
|
NUM          {fprintf(stdout,"Constant: %s \n",$1);}  
|
ID           {fprintf(stdout,"Variable: %s \n",$1);}
|
STRING       {fprintf(stdout,"String: %s \n",$1);}
;
%%

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