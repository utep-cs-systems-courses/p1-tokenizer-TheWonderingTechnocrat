#include <stdio.h>
#include "tokenizer.h"

int space_char(char c)
{
  if (c == ' '|| c == '\t' || c == '\n' || c == '\v' || c == '\f' || c== '\r')
      return 1;
  else
      return 0;
}

int non_space_char(char c)
{
  if (space_char(c) != 1)
    return 1;
  else
    return 0;
}
char*token_start(char* str)
{
  char* us_p;
  us_p= str;
  while(*us_p != '\0')
    {
      printf("this is not working");
      us_p++;
      printf("this is not working2");
    }
  printf("this is not working3");
  return us_p;
}
    
char *token_terminator(char token)
{
  //  (token_start(*token))
  //while(*token && non_space_char(token)== 0)
  // {
  //    token++;
  // }
  return NULL;
}
   
int count_tokens(char *str)
{
  int count;
  while (*str)
    {
      count = 0;
      if(*token_start(str))
	{
	  //token_terminator(str);
	  count++;
	}
    }
  return count;
}

char *copy_str(char *inStr, short len)
{
  char *p = inStr;
  //p=(malloc (len+1)) *sizeof(char);
  int i;
  for (i=0; i < len; i++)
    {
      p[i] = inStr[i];
    }
  p[len+1] = '\0';
  return p;
}

char **tokenize(char* str)
{
  int i,j;
  char *p;
  char *s;
  int strSize = count_tokens(str);
  char ** tokens;
  //tokens = (char**)(malloc(strSize+1))*sizeof(char));
  
if(strSize == 0)
    {
      return '\0';
    }
  for (i= 0; i < (strSize); i++)
    {
      s = token_start(str);
      //p = token_terminator(str);
      //token[i] =+ copy_str(s,s-p);
    }
  tokens[i] = (char*)NULL;
  return tokens;
}

void print_tokens(char **tokens)
{
  char ** useful_copy;
  useful_copy = tokens;

  while (useful_copy != NULL)
    {
      printf("the tokens are :\n", *useful_copy);
	useful_copy++;
    }
}

void free_tokens(char ** tokens)
{
  while (tokens != NULL)
    {
      //free(tokens);
      tokens++;
    }
}


  
