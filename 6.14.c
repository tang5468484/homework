#include <stdio.h>
//	6.14.c
main()
{
	int man, woman, child;
	int count = 30, money = 50;

	for (man=0;man<=count;man++)
		for (woman=0;woman<=count;woman++)
			for (child=0;child<=count;child++)
				if (child+woman+man == count &&
				    child*1 + woman*2 + man*3 == money)
					printf("%d man, %d woman, %dchild\n", man, woman, child);
}

	
