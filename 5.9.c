#include <stdio.h>

main()
{
	int score, mark;
	
	printf("Please enter score:");
	scanf("%d", &score);
	mark = score < 0 || score > 100 ? -1 : score / 10;
	
	if (9 == mark || 10 == mark)
		printf("%d--A\n", mark);
	else if (8 == mark)
		printf("%d--B\n", mark);
	else if (7 == mark)
		printf("%d--C\n", mark);
	else if (6 == mark)
		printf("%d--D\n", mark);
	else if (mark < 6 && mark >=0)
		printf("%d--E\n", mark);
	else
		printf("Input error!\n");
}