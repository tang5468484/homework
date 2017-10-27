#include <stdio.h>
#include <math.h>
//	6.7.c
main()
{
	float rate;
	int money = 1e7, n = 0;

	printf("Enter rate:");
	scanf("%f", &rate); 
	while(pow(1+rate/100, n++) < 2);
	printf("n = %d\n", n);
}
