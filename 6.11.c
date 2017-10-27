#include <stdio.h>
//	6.11.c
main()
{
	int n;
	int a = 1, i = 1, sum = 0;

	printf("Enter n:");
	scanf("%d", &n);

	while (sum < n) {
		a *= i++;
		sum += a;
	}

	printf("m =  %d\n", i-2);
}
