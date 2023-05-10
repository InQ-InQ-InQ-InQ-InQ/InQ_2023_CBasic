#include<stdio.h>

int main() 
{
	int N;
 
	scanf("%d",&N);
 
	for (int a = 1; a <= N; a++) 
    {
		for (int i = 0; i < N - a; i++) 
        {
			printf(" ");
		}
 
		for (int j = 0; j < a; j++) 
        {
			printf("*");
		}
 
		printf("\n");
	}
	return 0;
}
