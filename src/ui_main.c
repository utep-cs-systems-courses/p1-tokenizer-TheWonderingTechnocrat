#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){

  char a = 'A';
  char b ='\t';

  int test;
  test= space_char(a);
  int test2;
  printf("This is a test : %d\n",test);
  test2 = non_space_char(a);
  printf("This is a two : %d\n",test2);
  char* c = "A";
  int test3;
  test3 = *token_start(c);

  printf("This is test three: \n",test3);
  
  return 0;

  
}
