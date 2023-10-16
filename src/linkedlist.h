#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct Node{
  char* data;
  struct Node* next;
}Node;

typedef struct LinkedList{
  Node* head;
}LinkedList;

Node* createNode(char* data);
void append(LinkedList* list,char* data);
void display(LinkedList* list);
Node* search(LinkedList* list, char* data);
void freeList(LinkedList* list);
void searchinHistory(LinkedList* list);

#endif
  

