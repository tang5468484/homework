#include <stdio.h>
//	7.10.c
//	132

int main()
{
	int a, b, c, d, e, f, g, i;
	
	scanf("%d", &d);
	e = (d+100)/222;
	f = (d+999)/222;

	for (i=e;i<=f;i++) {
		g = 222*i-d;
		a = g/100;
		b = (g-a*100)/10;
		c = g - a*100 - b*10;
		if (a+b+c == i) break;
	}
	printf("%d\n", a*100 + b*10 + c);


}

#if 0
2a+2b+c+20*a+20*c+10*b+a*100+200*b+200*c

221*c + 212*b + 122*a = 1999
122(a+b+c) + 90b + 99c = 1999 
c + 10*b + 100*a = abc
//abc + 99c  + 90b = 100(a+b+c)
1999 - abc = 220c + 202b + 22a
1999 + abc = 222*(a+b+c)
	
1999 - 99c - 90b = 122(a+b+c)
1999 - abc - 99c - 90c = 22(a+b+c)
200a + 200b + 200c + 20a + 20b + 20c + 2a + 2b + 2c = 222(a+b+c)
#endif



