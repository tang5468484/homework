#include <stdio.h>
#include <math.h>

#define ze 1e-4
//  6.8.c
main()
{
	int sign = -1, term = 1;
	double pi1 = 0;
	
	do
	{	sign *= -1;
		pi1 += sign * 1.0 / term;  
		term += 2;
	} while (fabs(1.0 / term) > ze);
	printf("%lf\n", pi1*4);
}
