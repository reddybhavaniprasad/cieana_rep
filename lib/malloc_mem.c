#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mem_alloc.h"

void malloc_mem() {

   char name[100];
   char *description;

   strcpy(name, "Hi Prasad-M");

   /* allocate memory dynamically */
   description = malloc( 200 * sizeof(char) );
	
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else {
      strcpy( description, "Prasad you are in malloc");
   }
   
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );
   free(description);
   
}
