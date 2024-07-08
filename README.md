# CUCU-Compiler
A compiler for a toy programming language. CUCU(A Compiler U Can Understand).

Aim: Learning to write a compiler for a simple language

The following folder contains the below-mentioned files:-
1. cucu.l
2. cucu.y
3. Lexer.txt
4. Parser.txt
5. cucu.tab.c
6. cucu.tab.h
7. lex.yy.c
8. cucu

The Following Instructions Should Be Followed While Running The Program :
    A. Open the terminal in the directory 2020CSB1097 and Enter the following commands to run the program :
        1. flex cucu.l
        2. bison -d cucu.y
        3. gcc cucu.tab.c lex.yy.c -lfl -o cucu
        4. ./cucu Sample1.cu (for Sample1.cu file which contains correct code)  
        5. ./cucu Sample2.cu (for Sample2.cu file which contains code with error)  

Cucu.l

    A. I've tokenized all the variable names, keywords, special characters and numbers.
    B. It will give the output inside the lexer.txt file and print every token name in it.

cucu.y

    A. This program contains the BNF grammar rules for the compiler.
    B. This will give the output inside the parser.txt file and print the parsing of code.
    C. If there would be any error in syntax then an error message Syntax Error is printed in the terminal and code returns from there.


Sample1.cu

    A. This file contains the code which has correct synatx.
    B. You can add your correct syntax code here and the program would parse it.

Sample2.cu

    A. This file contains the code which has incorrect syntax.
    B. You can add your incorrect synatx code here and the program would parse it and print the Syntax error if it is wrong.

lexer.txt

    A. This file contains the output obtained by the cucu.l file, which are all the tokens in the code.

parser.txt

    A. This file stores the output obtained by the cucu.y file, which is parsed by the cucu.y file and \
        printed the steps and different types of statements in it.
