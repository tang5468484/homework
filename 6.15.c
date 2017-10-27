#include <stdio.h>
//	6.15.c
main()
{
	int head = 98, foot = 386;
	int i, j;

	for (i=0;i<=98;i++)
		for (j=0;j<=98;j++)
			if (i+j == head && i*2 + j*4 == foot)
				printf("%d %d\n",i, j);
}
