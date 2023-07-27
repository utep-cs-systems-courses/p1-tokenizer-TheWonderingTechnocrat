#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

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
  char **work;
  work=tokenize(test1);
  printf("this token: %s\n",work);

  print_tokens(work);

  char string1[20];
  printf("Please enter the string: \n");
  fgets(string1,20,stdin);
  printf("The string is :%s\n",string1);
  
  List* historyList= init_history();
  add_history(historyList,string1);
  print_history(historyList);

  return 0;
}

