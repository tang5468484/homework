#include <stdio.h>
//	7.4.c
//	Least Common Multiple
//	132
unsigned int lcm(unsigned int a, unsigned int b);

int main()
{
	int q, w, s;
	
	printf("Please enter two number:");
	scanf("%d %d", &q, &w);
	s = lcm(q, w);
	printf("The Least Common Multiple number of %d and %d is %d.\n", q, w, s);

	return 0;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	int temp;

	temp = a > b ?b:a;

	while (!(temp % a == 0 && temp % b == 0))
		temp++;
	return temp;
}
