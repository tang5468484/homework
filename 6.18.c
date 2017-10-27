#include <stdio.h>
//	6.18.c
void fun1();
void fun2();
void fun3();
main()
{
	fun1();
	fun2();
	fun3();
}
void fun1()
{
	int i, j;
	
	for (i = 1;i<10;i++)
		printf("%4d", i);
	printf("\n\n");
	
	for (i = 1;i<10;i++)
		printf("%4c", '-');
	printf("\n\n");
	
	for (i=1;i<10;i++) {
		for (j=1;j<10;j++)
			printf("%4d", j*i);
		printf("\n\n");
	}
	
}


fun2()
{
	int i, j;
	
	for (i=1;i<10;i++)
		printf("%4d", i);
	printf("\n\n");
	
	for (i=0;i<9;i++)
		printf("%4c", '-');
	printf("\n\n");
	
	for (i=1;i<10;i++) {
		for (j=1;j<=i;j++)
			printf("%4d", j*i);
		printf("\n\n");
	}
}

fun3()
{
	int i, j;
	
	for (i=1;i<10;i++)
		printf("%4d", i);
	printf("\n\n");
	
	for (i=0;i<9;i++)
		printf("%4c", '-');
	printf("\n\n");
	
	for (i=1;i<10;i++) {	
		for (j=1;j<10;j++)
			if (j>=i)
				printf("%4d", j*i);
			else
				printf("    ");
		printf("\n\n");
	}
}
