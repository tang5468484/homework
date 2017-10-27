#include <stdio.h>
//  6.4.c
main()
{
	int n;
	
	scanf("%d", &n);
	for (;n>0;n--)
		printf("%10d%10d\n", n*n, n*n*n);
}
