#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, i = 0, j = 0;
	scanf("%d", &n);

	for (i = n; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}