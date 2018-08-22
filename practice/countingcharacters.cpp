#include <stdio.h>
main(){
  int num_chars = 0;  /* variable to hold number of chars */
  int c;        /* the current fetched char */
  c = getchar(); /* fetch the first char */
  while (c != EOF){ /* go until end of file is reached */
     ++ num_chars; /* same as num_chars = num_chars+1 */
      c = getchar(); /* fetch the next char */
      putchar(c);
   }
}