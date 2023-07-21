#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){
  
  char *test1= "this";
  int testcount;
  int testlength;
  testcount=count_tokens(test1);
  testlength=gtlength(test1);
  printf("This is count: %d\n",testcount);
  printf("This is length: %d\n",testlength);
  

  return 0;
}

