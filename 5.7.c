#include <stdio.h>

main()
{
	char a;
	
	scanf("%c", &a);

	if (a>='A' && a<= 'Z')
		a +=32;
	else if (a>='a' && a<= 'z')
		a -= 32;
	
	printf("%c %d\n", a, a);
}