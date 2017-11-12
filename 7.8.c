#include <stdio.h>
#define ISINT(x) (x == (int)x)
//	7.8.c
//	132
int main()
{
	int i, a;
	float d;
	
	i = 0;
	while (1) {

		a = i++*5+1;
		d = (float)a/4*5+1;

		if (!ISINT(d)) continue;
		d = d/4*5+1;
		if (!ISINT(d)) continue;
		d = d/4*5+1;
		if (!ISINT(d)) continue;
		d = d/4*5+1;
		if (!ISINT(d)) continue;
		printf("%d\n",(int)d);
		break;
	}
	
	return 0;
}

