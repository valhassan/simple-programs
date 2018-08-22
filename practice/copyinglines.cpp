#include<stdio.h>
main(){
  int num_lines = 0;
  int c;
  c = getchar();
  while (c != EOF){
  if (c = '\n'){    /* check for newline characacter */ 
        ++num_lines; /* if so, increment line num counter */
     }
     c = getchar();
     putchar(c);
  }
}