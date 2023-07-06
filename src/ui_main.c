#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){

  char a = 'A';
  char b ='\t';

  int test;
  test= space_char(b);

  printf("This is a test : %d\n",test);

  return 0;

  
}
