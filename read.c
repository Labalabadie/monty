#include <stdio.h>
#include "monty.h"

ssize_t _read(const char *filename)
 {
   FILE *fp;
   int c;
  
   fp = fopen(filename,"r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) { 
         break ;
      }
	printf("%c", c);	
      
   }

   fclose(fp);

   return(0);
}
