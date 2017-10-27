#include <stdio.h>

main()
{
	char a;
	
	scanf("%c", &a);

	if (a >= 'A' && a<= 'Z')
		printf("它是个大写字母\n");
	else if (a >= 'a' && a <= 'z')
		printf("它是个小写字母\n");
	else if (a >= '0' && a <= '9')
		printf("他是个数字\n");
	else if (' ' == a)
		printf("他是个空格\n");
	else
		printf("它是其他字符\n");
	
}