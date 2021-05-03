#include <stdio.h>

int main()
{
	int x;
	printf("Enter the number:\n");
	scanf("%d", &x);
	printf("The digits are:\n");
	while (x != 0)
	{
		printf("%d ", x % 10);
		x /= 10;
	}
	return 0;
}
