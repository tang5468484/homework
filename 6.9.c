#include <stdio.h>

#define z 1e-5
//  6.9.c
main()
{
	double e = 1;
	double term = 1;
	int i = 1;

	do 
	{
		term *= i++;
		e += 1.0/term;
	} while (1/term > z);

	printf("%lf\n", e);
}
