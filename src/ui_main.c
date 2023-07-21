#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){
  
  char *test1= "this is";
  int testcount;
  int testlength;
  testcount=count_tokens(test1);
  testlength=gtlength(test1);
  printf("This is count: %d\n",testcount);
  printf("This is length: %d\n",testlength);
  char* rts;
  rts=copy_str(test1,testlength);
  printf("copied string: %s\n",rts);
  char **hate;
  hate=tokenize(test1);
  printf("this token: %s\n",hate);



  

  return 0;
}

