#include<stdio.h>

int main()
{

    int A, B, C, sum, res;
    int a[10] = { 0 };
    scanf("%d %d %d", &A, &B, &C);
    sum = A * B * C;
    
    while (sum >0) {
        res = sum % 10;
        a[res]++;
        sum /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

}