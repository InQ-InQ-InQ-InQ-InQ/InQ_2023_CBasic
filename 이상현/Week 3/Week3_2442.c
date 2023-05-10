#include<stdio.h>

int main()
{
    int N, j, k;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (j = 0; j < N - i-1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i * 2 + 1; k++)
        {
            printf("*");
        }
        printf("%c", '\n');
    }
}