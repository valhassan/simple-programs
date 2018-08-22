#include <stdio.h>

main ()
{
    union id {
      char name[40];
      int number;
    };
    struct {
      int salary;
      union id description;
    } student,faculty;
    printf("%d\n", sizeof(union id));
    printf("%s %d\n",
student.description.name,student.description.number);
    student.description.number = 12;
    printf("%s %d\n",
student.description.name,student.description.number);


}
