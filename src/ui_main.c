#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){

  char a = 'A';
  char b ='\t';

  int test;
  test= space_char(a);
  int test2;
  //printf("This is a test : %d\n",test);
  test2 = non_space_char(a);
  //  printf("This is a two : %d\n",test2);
  char* c = "  A";
  char* test3;
  test3 = token_start(c);

  // printf("This is test three: %s\n",test3);
  char* d= " AB ";
  char* test4;
  test4 = token_terminator(d);
  //  printf("This is a test four: %s\n",test4);

  char* e= " This is working";
  int test5;
  test5 = count_tokens(e);
  
  printf("This is test five: %d\n",test5);
	 
  return 0;

  
}
