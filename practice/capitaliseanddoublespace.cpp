#include <stdio.h>
 main() {
int c;
while ((c = getchar()) != EOF) {
if ('a' <= c && c <= 'z')
putchar (c + 'A' - 'a');
else if (c == '\n') {
putchar ('\n');
putchar ('\n');
}
else
putchar (c);
}
}
