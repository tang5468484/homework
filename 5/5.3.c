#include <stdio.h>

main()
{
	float a, b ,c;
	
	printf("Input a b c:");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a+b>c && a+c>b && c+b>a) {
		printf("%f\n", 0.5*(a+b+c));
	} else {
		printf("²»ÄÜ¹¹³ÉÈý½ÇÐÎ\n");
	}
}
