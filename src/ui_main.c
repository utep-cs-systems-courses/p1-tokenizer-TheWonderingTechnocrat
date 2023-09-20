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

  char string2[20];
  printf("Please enter another string: \n");
  fgets(string2,20,stdin);
  printf("The string is :%s\n",string2);

  char string3[20];
  printf("Please enter another string again:\n");
  fgets(string3,20,stdin);
  printf("The string is :%s\n",string3);

  char* testhistory;
  
  List* historyList= init_history();
  add_history(historyList,string1);
  add_history(historyList,string2);
  add_history(historyList,string3);
  print_history(historyList);
  testhistory= get_history(historyList,2);
  printf("testhistory %s \n",testhistory);

  printf("Im Done\n");
  return 0;
}

