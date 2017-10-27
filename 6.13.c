#include <stdio.h>
//	6.13.c
main()
{
	int a = 0, n = 0;

	  do
	{
		n += a>0 ? a : 0;
		scanf("%d", &a);
	} while (a != 0);
	
	printf("%d\n", n);
}
