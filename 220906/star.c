#include<stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);




	for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
			printf("*");
		for (int k = 2 * n - 2 * i; k > 0; k--)
			printf(" ");
		for (int j = i; j > 0; j--)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j > 0; j--)
			printf("*");
		for (int k = 2 * n - 2 * i; k > 0; k--)
			printf(" ");
		for (int j = i; j > 0; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}