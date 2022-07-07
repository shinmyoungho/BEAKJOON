#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[1000003];
	int count = 0;
	scanf_s("%[^\n]s", str, sizeof(str));				//"%[^\n]s"  ->엔터가 입력될 때 까지 문자열을 입력 받겠다.

	if (str[0] != ' ')
	{
		count++;
	}
	for (int i = 1; i < strlen(str); i++)
	{
		if (str[i - 1] == ' ' && str[i] != ' ')
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}