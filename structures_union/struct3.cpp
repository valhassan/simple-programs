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
 
          int i;
          struct object gameobjs[2];
          gameobjs[0] = createobj("player1", 0, 0);
          gameobjs[1] = createobj("enemy1", 2, 3);
 
          for (i = 0; i < 2; i++)
            printobj(gameobjs[i]);
         
          //update enemy1 position
          gameobjs[1].xpos = 1;
          gameobjs[1].ypos = 2;
         
          for (i = 0; i < 2; i++)
            printobj(gameobjs[i]);
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