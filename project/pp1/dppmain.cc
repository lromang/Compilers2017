/* File: dppmain.cc
 * ----------------
 * This file defines the main() routine for the preprocessor, 
 * the filtering tool which runs before the compiler.
 */
 
#include "scanner.h"
#include <stdio.h>

/* Function: main()
 * ----------------
 * Entry point to the preprocessor.
 * As given below, this "filter" just copies stdin to stdout unchanged.
 * It will be your job to actually do some filtering, either by hand-coded
 * transformation of the input or by setting up a lex scanner in the dpp.l
 * file and changing the main below to invoke it via yylex. When finished,
 * the preprocessor should echo stdin to stdout making the transformations
 * to strip comments and handle preprocessor directives.
 */
int main(int argc, char *argv[])
{
  char ch;
  char lookAHead;
  while ((ch = getc(stdin)) != EOF){
  read1 :
    if(ch == '/'){
      lookAHead = getc(stdin);
      if(lookAHead == '/'){
        while(getc(stdin) != '\n');
      }else if(lookAHead == '*'){
        while((getc(stdin) != '*') &&  (getc(stdin) != '/'));
        goto read1;
      }else{
        putc(ch, stdout);
        putc(lookAHead, stdout);
      }
    }else{
      putc(ch, stdout);
    }
  }
  return 0;
}

  
