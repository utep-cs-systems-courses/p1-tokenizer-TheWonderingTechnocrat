#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"
/*
typedef struct Node{
  char* data;
  struct Node* next;
}Node;

typedef struct LinkedList{
  Node* head;
}LinkedList;
*/
Node* createNode(char* data){
  Node* newNode = (Node*)malloc (sizeof(Node));
  if(newNode == NULL){
    printf("error in mem alloc");
    exit(EXIT_FAILURE);
  }
  newNode-> data = strdup(data);
  newNode-> next = NULL;
  return newNode;
}
  
  void append(LinkedList* list, char* data){
    Node* newNode = createNode(data);
    if(list-> head == NULL){
      list->head= newNode;
      return;
    }

    Node* temp= list->head;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next= newNode;
  }

  void display(LinkedList* list){
    Node* current = list->head;
    while(current != NULL){
      printf("%s -> ", current->data);
      current= current->next;
    }
    printf("NULL\n");
  }

  Node* search(LinkedList* list, char* data){
    Node* current = list->head;
    while(current != NULL){
      if(strcmp(current->data,data) == 0)
	return current;
      current= current->next;
    }
    return NULL; //data wasn't in the list
  }
  
   void freeList(LinkedList* list){
     Node* current = list-> head;
     Node* next;
     while(current != NULL){
       next= current-> next;
       free(current->data);
       free(current);
       current = next;
     }
     list-> head= NULL;
   }

   


     
      
	
	
      
    
    



    

    
    
