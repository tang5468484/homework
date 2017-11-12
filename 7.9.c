#include <stdio.h>
//	7.9.c
//	132

int howold(int which);

int main()
{
	int years;
	
	years = howold(5);
	printf("the fifth people's years old is %d.\n", years);

	return 0;
}

int howold(int n)
{
	if (n == 1) return 10;
	return howold(n-1) + 2;
}

#if 0
int howold(int which)
{
	switch(which)
	{
		case 5:
			return howold(4) + 2;
			break;
		case 4:
			return howold(3) + 2;
			break;
		case 3:
			return howold(2) + 2;
			break;
		case 2:
			return howold(1) + 2;
			break;
		case 1:
			return 10;
		default:
			return 0;
	}
}
#endif
