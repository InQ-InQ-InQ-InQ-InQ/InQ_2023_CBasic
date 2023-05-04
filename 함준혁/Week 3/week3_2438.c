#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, input;
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}