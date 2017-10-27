#include <stdio.h>

main()
{
	int year, month;
	printf("Please enter year month:");
	scanf("%d %d", &year, &month);
	if (year < 0)
		month = -1;
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("31\n");break;
		case 2:
			//if ((year%4 == 0 && year %100 != 0) || year % 400 == 0);
			printf("%s\n", (year%4 == 0 && year%100 != 0) || year%400 == 0 ? "29" : "28");
			break;
		case 4:
		case 6:
		case 9:
		case 11:printf("30\n");break;
		default:printf("Input error\n");
	}
			
}