#include <stdio.h>
//	7.7.c
//	Greatest Commom Divisor
//	132

int Gcd_q(int a, int b);
int Gcd_o(int a, int b);
int Gcd_d(int a, int b);

int main()
{
	int q, w;

	printf("Please enter two number:");
	scanf("%d %d", &q, &w);
	printf("qiong ju   : %d\n", Gcd_q(q, w));
	printf("ou ji li de: %d\n", Gcd_o(q, w));
	printf("di gui     : %d\n", Gcd_d(q, w));

	return 0;
}
// qiong ju fa
int Gcd_q(int a, int b)
{
	int t;

	t = a > b? b:a;
	for (;t>1;t--)
		if (a%t == 0 && b%t == 0) break;  	
	return t;
}
//ou ji li de fa
int Gcd_o(int a, int b)
{
	int r;

	do
	{
		r = a % b;
		a = b;
		b = r;
	} while (r);

	return a;
}
//di gui fa
int Gcd_d(int a, int b)
{
	if (a  > b) 
		return Gcd_d(a-b, b);
	else if (a  < b) 
		return Gcd_d(a, b-a);
	else 
		return a;
	 //(a == b) 
//	return a;
}
