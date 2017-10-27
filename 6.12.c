#include <stdio.h>
//	6.12.c
main()
{
	int a = 0, n = 0;

	  do
	{
		n += a;
		scanf("%d", &a);
	} while (a > 0);
	
	printf("%d\n", n);
}
