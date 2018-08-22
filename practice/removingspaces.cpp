#include <stdio.h>
#include <ctype.h>
int main(void)
{
        int c;


        while ((c = getchar()) != EOF) {                 /* the character is not EOF */
                if (isspace(c)){                             /* is the character a space? */
                        while ((c = getchar()) != EOF && isspace(c)) {    /* then see if the next character is not EOF and is another space */
                                ;                                             /* continue reading until not two spaces next to each other */
                        }
                        putchar(' ');                                /* all spaces cannot be removed, keep one */
                };
                putchar(c);                                  /* print the character if the first one was not a space */
        };
        return 0;
                
}