#include <stdio.h>
// 	6.16.c
main()
{
	int a = 5, b = 3, c = 1, c1 = 3;;
	int i, j, k;
	int money = 100, count = 100;
	
	for (i=0;i<=100;i++)
		for (j=0;j<=100;j++)
			for (k=0;k<=100;k++)
				if (i*a + j*b + k*c == money && i+j+c1*k == count)
					printf("%d %d %d\n", i, j, k*c1);
}
