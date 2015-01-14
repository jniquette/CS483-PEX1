#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


node* list_insert_tail(node* list, char* string)
{
	
}

node* list_insert_head(node* list, char* string)
{
  //Create a new node to put the new string in
  struct s_node newNode;
  newNode.next = list;
  newNode.data = string;
  return &newNode;
}

node* list_insertn(node* list, char* string, int n)
{
}

node* list_remove(node* list, char* string)
{
}

node* list_removen(node* list, int n)
{
}

void list_print(node* list)
{
}

void list_printn(node* list, int n)
{
}

char* list_get(node* list, int n)
{
}

void list_destroy(node* list)
{
}
