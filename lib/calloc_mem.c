#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mem_alloc.h"

void calloc_mem() {

   char name[100];
   char *description;

   strcpy(name, "Hi Prasad-C");

   /* allocate memory dynamically */
   description = calloc( 200 , sizeof(char) );
	
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else {
      strcpy( description, "Prasad you are in calloc");
   }
   
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );
   free(description);
  
}
