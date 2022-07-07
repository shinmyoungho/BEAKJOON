#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[1000001];
	scanf_s("%s", s, sizeof(s));
	int a[30];
	int max,indx = 0,indx2=0;
	for (int i = 0; i < 30;i++)
	{
		a[i] = 0;
	}
	for (int i = 0; i < strlen(s); i++)                       // 백준1157내가 풀어본 오답
	{
		if (s[i] > 'z')
		{
			s[i] = s[i] - 32;
		}
		a[s[i]-64]++;
	}
	max = a[1];
	for (int i = 1; i < 27; i++)
	{
		if (max > a[i])
		{
			max = a[i];
			indx = i;
		}
	}
	for (int i = 1; i < 27; i++)
	{
		if (a[indx] == a[i])
		{
			indx2 = indx;
		}
	}
	if (indx2 == indx)
	{
		printf("?");
	}
	else printf("%c", indx + 64);

	return 0;
}