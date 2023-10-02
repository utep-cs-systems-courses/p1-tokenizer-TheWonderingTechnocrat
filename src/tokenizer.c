#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "linkedlist.h"

//LinkedList list= {NULL};

int space_char(char c)
{
  if (c == ' '|| c == '\t' || c == '\n' || c == '\v' || c == '\f' || c== '\r' && c != '\0')
      return 1;
  else
      return 0;
}

int non_space_char(char c)
{
  if (c== ' '|| c=='\t' || c == '\0')
    return 0;
  else
    return 1;
}
char* token_start(char* str)
{
  char* us_p = str;
  while(*us_p != '\0')
    {
      
      if(non_space_char(*us_p)){
	
	  return us_p;
	}
	us_p++;
    }
  return us_p;
}
    
char *token_terminator(char* token)
{
  char* us_p = token;  
  while (*us_p!='\0' )
    {
     
      if(space_char(*us_p)){
	return us_p;
    }
      us_p++;
  
    }
  return us_p;
}
   
int count_tokens(char* str)
{
  int count;
  count=0;
  char* us_p = str;
  
  while ((*us_p !='\0'))
    {
      us_p= token_start(us_p);
      us_p = token_terminator(us_p);
      count++; 
    }
  return count;
}
int gtlength(char* str)
{
  int count;
  count=0;
  char* us_p= str;

  while(*us_p!= '\0')
    {
      count++;
      us_p++;
    }
    return count;
  
}
char *copy_str(char *inStr, short len)
{
  char *p =  malloc ((len+1) * sizeof(char));
  int i;
  for (i=0; i < len; i++)
    {
      p[i] = inStr[i];
    }
  p[len] = '\0';
  return p;
}

char **tokenize(char* str)
{
  char *us_p = str;
  int i;
  char *p =us_p;
  char *s;
  int numTokens = count_tokens(str);
  char ** tokens= malloc ((numTokens+1) *sizeof(char*));
  printf("%s\n" , str);
  printf("numTokens = %d\n",numTokens);
  /*
if(!numTokens)
    {
      return NULL;
    }
  */
 for(i=0; i< numTokens; i++)
    {
      printf("Iteration #%d\n", i);
      us_p = token_start(p);
      printf("start\n");
      p = token_terminator(us_p);
      printf("terminate\n");
      s = copy_str(us_p,p-us_p);
      printf("%s\n", s);
      tokens[i] = copy_str(us_p,p-us_p);
      //printf("tokens: %s'\n'",i,*tokens[i]);
      //printf("End of iteration %s\n:", *tokens[i]);
    }
  tokens[i] = NULL;
  //print_tokens(tokens);
  return tokens;
}


void print_tokens(char **tokens)
{
  char ** useful_copy= tokens;
  if(tokens == NULL){
    printf("Tokens array is null!: %s'\n'");
    return;
  }

  while (*useful_copy != NULL)
    {
      printf("the tokens are :%s\n", *useful_copy);
	useful_copy++;
    }
}

  
void rtn_tokens(LinkedList list,char **tokens)
{
  char ** useful_copy= tokens;
  if(tokens == NULL){
    printf("Tokens array is null!: %s'\n'");
    return;
  }

  while (*useful_copy != NULL)
    {
      //printf(*useful_copy);
      append(&list,*useful_copy);
      //display(&list);
	useful_copy++;
    }
}

void free_tokens(char ** tokens){
  
  if(tokens == NULL){
    return;
  }
  for(int i=0; tokens[i]!=NULL; i++){

    free(tokens[i]);
  }
    
  free(tokens);
}

  
