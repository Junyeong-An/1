#include<stdio.h>

int main(void)

{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < 4 - i; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (j = 7; j > 2 * i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}