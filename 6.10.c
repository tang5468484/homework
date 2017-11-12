#include <stdio.h>

#define l(x) x*x*x
//  6.10.c
main()
{
	int i, a, b, c;

	for (i=100;i<=999;i++){ 
		a = i/100;
		b = (i-a*100)/10;
		c = i - a*100 - b*10;
		
		if (i == l(a) + l(b) + l(c))
			printf("%d\n", i);
	}
}
