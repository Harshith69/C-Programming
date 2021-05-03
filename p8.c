#include <stdio.h>

int main()
{
	int x, ans[50] = {}, len = 0;
	printf("Enter the number:\n");
	scanf("%d", &x);
	printf("The digits are:\n");
	while (x != 0)
	{
		ans[len++] = x % 10;
		x /= 10;
	}

	for (int i = len - 1; i >= 0; i--)
		printf("%d ", ans[i]);

	return 0;
}