#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/* Example test program for CS 483 PEX 1
   USAFA/DFCS
   Maj Hancock
   david.hancock.2@us.af.mil

   This is not necessarily the same file that will be
   used to test PEX 1, but it should be pretty close */

int main(void) {
  node* list = NULL;
  char* zero = "zero";
  char* one = "one";
  char* two = "two";
  char* three = "three";


  list_print(list);

  printf("Inserting using list_insert_tail()\n");
  list = list_insert_tail(list, one);
  list = list_insert_tail(list, two);
  list = list_insert_tail(list, three);
  list_print(list);


  printf("\nlist_insert_head and list_print test:\n");
  list = list_insert_head(list, "head1");
  list = list_insert_head(list, "head2");
  list = list_insert_head(list, "head3");
  list_print(list);



  printf("\nlist_remove test (middle):\n");
  list = list_remove(list, "one");
  list_print(list);

  printf("\nlist_insertn test:\n");
  list = list_insertn(list, "Put me Fourth", 4);
  list = list_insertn(list, "Put me Beyond the end", 40);
  list_print(list);

  printf("\nlist_removen test:\n");
  list = list_removen(list, 8);
  list_print(list);

  printf("\nlist_printn test:\n");
  list_printn(list, 1);
  list_printn(list, 2);
  list_printn(list, 7);
  list_printn(list, 8);

  printf("\nlist_get test:\n");
  int i;
  for(i = 1; i <= 8; i++) {
    printf("%d: %s\n", i, list_get(list, i));
  }

  printf("\nDestroy the List:\n");
  list_destroy(list);
}
