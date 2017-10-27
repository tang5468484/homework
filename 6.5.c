#include <stdio.h>
//  6.5.c
main()
{
	int f = 300, i;

	for (i=0;i<=f;i+=10)
		printf("%4d%4d\n", i, 5/9*(f-32));
}
