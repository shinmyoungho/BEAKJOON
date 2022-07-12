#include<stdio.h>

int main(void)
{
	int a, b;
	int num[4], num2[4];
	scanf_s("%d %d", &a, &b);
	int i = 1;
	int k = 0;
	while (i < 1000)
	{
		num[k] = (a / i) % 10;
		num2[k] = (b / i) % 10;
		i = i * 10;
		k++;
	}
	int sum = num[0] * 100 + num[1] * 10 + num[2];
	int sum2 = num2[0] * 100 + num2[1] * 10 + num2[2];
	if (sum > sum2)
	{
		printf("%d", sum);
	}
	else printf("%d", sum2);

	return 0;
}