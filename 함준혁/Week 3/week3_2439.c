#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c, d;
	scanf("%d", &a);

	for (b = 1; b <= a; b++) {
		for (c = 1; c <= a - b; c++) {
			printf(" ");
		}
		for (d = 1; d <= b; d++) {
			printf("*");
		}
		printf("\n");
	}
}