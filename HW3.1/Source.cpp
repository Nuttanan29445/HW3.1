#include <stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i <= 2 * x - 1; i++)
	{
		for (int j = 1; j <= 2 * x - 1; j++)
		{
			if (i + j <= x || j - i >= x) {
				printf("  ");
			}
			else
			{
				printf("* ");
			}

		}
		printf("\n");
	}
}