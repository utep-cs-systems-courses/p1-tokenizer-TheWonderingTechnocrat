#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int main(){
  
  char a = 'A';
  char b ='\t';

  int test;
  test= space_char(a);
  int test2;
  printf("This is a test,return 0 : %d\n",test);
  test2 = non_space_char(a);
   printf("This is a two, return 1 : %d\n",test2);
  char* c = "  A";
  char* test3;
  //test3 = token_start(c);

  //printf("This is test three, should return A: %s\n",test3);
  printf("finished start");
  char* d= " AB";
  char* test4;
  printf("here");
  //test4 = token_terminator(d);
  //printf("This is a test four, should return  \0: %s\n",test4);
  printf("i did it");


  /*
  char* e= " This is working";
  int test5;
  test5 = count_tokens(e);
  
  printf("This is test five: %d\n",test5);
  char* f="This is working";
  int testhelp;
  testhelp= get_length(f);
  printf("This is a test of help: %d\n", testhelp);
  
  char* test6;
  test6 = copy_str( e , 35);
 
  
  printf("This is test six: %s\n",test6);
  char h[] = "This is working";
  char** test7 = tokenize(h);
  printf("i finished tokenize");
  printf("%s" , test7[0]);*/
  //if (test7 != NULL){
  //print_tokens(test7);
  // }
  // else{
  // printf("there is an error'\n'");
  //}

  //malloc (4 * sizeof(char**));

  // test7= tokenize(f);
  //printf("This is test seven: %s\n",test7);

  // print_tokens(test7);
  //return 0;
  return 1;  
}
