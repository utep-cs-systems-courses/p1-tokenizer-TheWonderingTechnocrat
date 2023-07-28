#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

List* init_history(){
  List*historyList= (List*) malloc( sizeof(List));
  if(historyList ==NULL){
    printf("mem errorin history: \n");
    return NULL;
  }
  historyList->root= NULL;
  
  return historyList;
}

int getlengthagain(char* str){
  int len =0;
  while(str[len] != '\0'){
    len++;
  }
  return len;
}
  
void add_history(List *list, char *str){

  char* usefulcpy;
  usefulcpy=str;
  if(list == NULL){
    printf("list is bad \n");
    return;
  }

      
  Item* itemHistory = (Item*) malloc(sizeof(Item));

  if(itemHistory == NULL){
    printf("mem error in add: \n");
    return;
  }
  itemHistory ->id = 0;
  int len= getlengthagain(str);
  
  itemHistory ->str= (char*) malloc((len+1) * sizeof(char));

  if(itemHistory->str== NULL){
    printf("mem error in str:\n");
    free(itemHistory);
    return;
  }
  
  for(int i=0; i< len-1; i++){
    // printf("this is for loop in add:\n");
    itemHistory->str[i]= str[i];
    // printf("this is after the forloop:\n");
  }
  
  itemHistory->str[len]= '\0';

  
  itemHistory->next= NULL;
  
  if(list->root== NULL){
    // printf("ifsta inadd");
    list->root= itemHistory;
  }else{
    Item* current= list->root;
    while(current->next!= NULL){
      // printf("this is the while in add:\n");
      current= current-> next;
    }

    current->next= itemHistory;
    int idup=0;
    itemHistory->id = idup+1; 
    
      
  }

}

char *get_history(List *list, int id){
  printf("inget_history \n");
  char* text="not in history";
  char* text2= "nothing there";
  Item* current= list->root;
  if(current== NULL){
    return text2;
  }
  while(current!= NULL){
    printf("in while history \n");
    if(current->id== id){
      printf("in for history \n");
      return current-> str;
    }
    current= current-> next;
  }
  return text;
}
    
void print_history(List *list){
  printf("this is a print_history:\n");
  Item* current= list->root;
  while(current!= NULL){
    printf("Items with id %d: %s\n",current-> id, current->str);
    current= current-> next;
  }
}


void free_history(List *list);
