#include<stdio.h>

int main()
{
    int a, sum, max;
    int d[10] = {0};
    scanf("%d", &a);
    while (a > 0)
    {
        sum = a % 10;
        d[sum]++;
        a /= 10;
    }
    
    max = (d[6] + d[9] + 1) / 2;
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        else if (d[i] > max)
        {
            max = d[i];
        }
    }
   printf("%d",max);
}