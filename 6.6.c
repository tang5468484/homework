#include <stdio.h>
//	6.6.c
main()
{
    int i;
    double money = 0;

    for(i = 0; i < 5; i++)
    {
        money = (money + 1000) / (1 + 12 * 1.875/100);
    }

    printf("%0.2f \n",money);

    return 0;
}