#include <stdio.h>
main()
{
	int i;
	int j=10;
	for (i=0; i<=j; i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("hello%d\n",i);
	}
}