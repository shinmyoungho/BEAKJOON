#include<stdio.h>
#include<string.h>

int main(void)
{
	int a[30];
	for (int i = 0; i < 30; i++)
	{
		a[i] = -1;
	}
	char c[100];
	scanf_s("%s", c, sizeof(c));
	for (int i = 0; i < strlen(c); i++)							//배열 a의 1부터 a ~ z로 한다
	{															//아스키코드 97은 a 이기 떄문에 -96을 해주면 1이 된다
		if (a[c[i] - 96] == -1)									// 그러므로 인덱스를 1부터 시작해서 아 몰랑
		{
			a[c[i] - 96] = i;
		}

	}
	for (int i = 1; i < 27; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}