#include<stdio.h>
#define MAX 1003

int array(int t) {
	if (t >= 1000){
		return 0;
	}
	if (t >= 100)
	{
		int hun = t / 100;
		int tens = (t / 10) % 10;
		int units = t % 10;
		if (hun - tens == tens - units)
		{
			return 1;
		}
		else return 0;
	}
	else
		return 1;
}

int main(void)
{
	int n;
	int a[MAX];
	scanf_s("%d", &n);
	int count=0;
	for (int i = 1; i <= n; i++)
	{
		int temp = array(i);
		a[i] = temp;
		if (a[i] == 1) {
			count++;
		}
	}
	printf("%d", count);
	return 0;

}