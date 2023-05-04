#include<stdio.h>

int main()
{
    int N,j,k;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        for (j=0; j<i; j++)
        {
            printf(" ");
        }
        for (k=0; k < N - j; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
