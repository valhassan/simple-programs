#include <stdio.h>
main()
	{
int x,y;
printf ("enter first number");
scanf("%d",&x);
printf("enter second number");
scanf("%d",&y);
x=x+y;
y=x+y;
printf("the smallest number is %d\n",x);
printf("the largest number is %d\n",y);
return 0;
	}