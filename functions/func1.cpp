     #include <stdio.h></stdio.h>
    #include <stdlib.h></stdlib.h>
    //Function for printing variable's values. 2 arguments, no return value.
    void printxy(int x, int y);
    int main(int argc, char *argv[]) {
    int x, y;
    x = 10;
    y = 5;
    printf("%s is runningn", argv[0]); printxy(x, y);
    x += y; printxy(x, y);
    y++; printxy(x, y);
    printf("%s is finishedn", argv[0]);
    return 0;
    }
    void printxy(int x, int y) { printf("value of x: %d, ", x); printf("value of y: %d", y); printf("n");
    }

