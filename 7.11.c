#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//	7.11.c
//	132
int myrand();

int main()
{
	int r;
	int a=0, b=0, c;
	char s;

	printf("The game is starting...\n\n");
	if (myrand()%2 == 0) {
		if (myrand()%2 == 0)
			printf("PC  say: 1\n");
		else
			printf("PC  say: 1 2\n");
	}

	while(1) 
	{
		printf("You say: ");
		scanf("%d", &a);//, s);
		s = getchar();
		if (s == ' ')
			scanf("%d", &b);

		a = b>a? b : a;

		if (a==30) {
			printf("\nYOU WIN!\n");
			return 0;
		}
		
		c = (30-a)%3;
		
		if (c != 1 && c != 2)
			c = myrand()%2+1;
		
		switch (c)
		{
			case 1:
				printf("PC  say: %d\n", a+1);
				if (a+1 == 30) {
					printf("\nPC WIN! :-)\n");
					return 0;
				}
				break;
			case 2:
				if (a+1 == 29 || a+2 == 30) {
					printf("PC  say: 29 30\n\nPC WIN! :-)\n");
					return 0;;
				}
				printf("PC  say: %d %d\n", a+1, a+2);
			}
	}

	return 0;
}

int myrand()
{
	srand(time(NULL));
	return (int)rand();
}