#include<stdio.h>

#define MAX 10003

int result(int n)
{
	int sum;
	if (n >= 10000) sum = n + (n / 10000) + (n / 1000) % 10 + (n / 100) % 10 + (n / 10) % 10 + n % 10;
	else if (n >= 1000) sum = n + (n / 1000) + (n / 100) % 10 + (n / 10) % 10 + n % 10;
	else if (n >= 100) sum = n + (n / 100) + (n / 10) % 10 + n % 10;
	else if (n >= 10) sum = n + (n / 10) % 10 + n % 10;
	else sum = n + n;												//셀프 넘버 이해만 했으면 쉽게 풀었을거같은 문제

	return sum;
}

int main(void)
{
	int a[MAX];
	
	for (int i = 1; i <= 10000; i++)
	{
		int check = result(i);
		if (check <= 10000) {
			a[check] = 1;
		}
		
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (a[i] != 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}