#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


node* list_insert_tail(node* list, char* string)
{
  //Recursive Method - first see if the list is empty
  if(list == NULL){
    //return list_insert_head(list, string);
    struct s_node *list = malloc(sizeof(struct s_node));
    (*list).data = string;
    return list;    
  }
  
  //If we're the last node in the list, add a node to next
  if((*list).next == NULL){
    struct s_node *newNode = malloc(sizeof(struct s_node));
    (*list).next = newNode;
    (*newNode).data = string;
    return list;
  }

  //Otherwise, look further down the list for the end
  (*list).next = list_insert_tail((*list).next, string);
  return list;
	
}

node* list_insert_head(node* list, char* string)
{
  //Create a new node to put the new string in
  struct s_node *newNode = malloc(sizeof(struct s_node));
  (*newNode).next = list;
  (*newNode).data = string;
  return newNode;
}

node* list_insertn(node* list, char* string, int n)
{
  //Since the head is at position 1, see if we're there and then insert it
  //Let's make it work on 0 also, since that makes sense too.
  //Additionally, let's save the user if they specify a higher position than the current size
  if(n <= 1 || (*list).next == NULL){ 
    //node *afterNewNode = list; //Move the old next to a temp pointer
    struct s_node *newNode = malloc(sizeof(struct s_node));//Create a new node to put the new string in
    (*newNode).next = list; //Put that old next node after the new node
    (*newNode).data = string;
    return newNode;
  }

  //Otherwise keep looking until we get to position 1
  (*list).next = list_insertn((*list).next, string, n-1);
  return list;

}

node* list_remove(node* list, char* string)
{
}

node* list_removen(node* list, int n)
{
}

void list_print(node* list)
{
  //This Subroutine is recursive, prints a node then calls itself until a null node is reached
  if(list != NULL){
    printf("%s\n", (*list).data);

    if((*list).next != NULL)
      list_print((*list).next);
  }

  //If initial call is to empty list
  else
    printf("[Empty List]\n");
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
