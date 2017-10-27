#include <stdio.h>
//	6.17.c
main()
{
	int money = 100, ten = 10, five = 5, one = 1;
	int i, j, k;

	for (i=1;i<=9;i++)
		for (j=1;j<=19;j++)
			for (k=1;k<=85;k++) 
				if (ten*i + five*j + one*k == money && i+j+k == 50)
					printf("%d ten, %d five, %d one\n", i, j, k);
}
