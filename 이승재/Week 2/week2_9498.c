#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    if (num1 >= 90)
    {
        printf("A\n");
    }

    else if (num1 >= 80)
    {
        printf("B\n");
    }

    else if (num1 >= 70)
    {
        printf("C\n");
    }

    else if (num1 >= 60)
    {
        printf("D\n");
    }

    else
    {
        printf("F\n");
    }

    return 0;
}