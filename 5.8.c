#include <stdio.h>

main()
{
	char a;
	
	scanf("%c", &a);

	if (a >= 'A' && a<= 'Z')
		printf("���Ǹ���д��ĸ\n");
	else if (a >= 'a' && a <= 'z')
		printf("���Ǹ�Сд��ĸ\n");
	else if (a >= '0' && a <= '9')
		printf("���Ǹ�����\n");
	else if (' ' == a)
		printf("���Ǹ��ո�\n");
	else
		printf("���������ַ�\n");
	
}