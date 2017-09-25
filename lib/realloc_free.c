#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mem_alloc.h"

void realloc_free() {

   char name[100];
   char *description;

   strcpy(name, "Hi Prasad-R");

   /* allocate memory dynamically */
   description = malloc( 30 * sizeof(char) );
	
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else {
      strcpy( description, "Prasad you are in malloc of realloc.");
   }
	
   /* suppose you want to store bigger description */
   description = realloc( description, 100 * sizeof(char) );
	
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else {
      strcat( description, "Prasad you are in realloc");
   }
   
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );

   /* release memory using free() function */
   free(description);
}
