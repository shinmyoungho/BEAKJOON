#include<stdio.h>
#include<string.h>

int main(void)
{
	int t;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int r;
		char s[30];
		scanf_s("%d", &r);
		scanf_s("%s", s, sizeof(s));
		for (int j = 0; j < strlen(s); j++)
		{
			for (int p = 0; p < r; p++)
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}