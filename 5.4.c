#include <stdio.h>
#include <math.h>

main()
{ 
	float a, c, d;
	int b;
	
	printf("�����������������ޣ�֮���Կո�ָ�\n");
	scanf("%f %d", &a, &b);
	
	switch (b)
	{
		case 1:d=2.25;break;
		case 2:d=2.43;break;
		case 3:d=2.70;break;
		case 5:d=2.88;break;
		case 8:d=3.00;break;
		default:return;
	}

	c = a*pow(d/100+1, b);
	printf("%f\n", c);
}