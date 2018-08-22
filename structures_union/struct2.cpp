    #include <stdio.h>
        #include <stdlib.h>
 
        struct object {
          char id[20];
          int xpos;
          int ypos;
        };
 
        struct object createobj(char id[], int xpos, int ypos);
 
        void printobj(struct object obj);
 
        int main() {
 
          struct object player1 = createobj("player1", 0, 0);
          struct object enemy1 = createobj("enemy1", 2, 3);
 
          printobj(player1);
          printobj(enemy1);
        }
 
        struct object createobj(char id[], int xpos, int ypos) {
          struct object newobj;
         
          newobj.xpos = xpos;
          newobj.ypos = ypos;
          return newobj;
        }
 
        void printobj(struct object obj) {
          printf("name: %s, ", obj.id);
          printf("x position: %d, ", obj.xpos);
          printf("y position: %d", obj.ypos);
          printf("\n");
        }