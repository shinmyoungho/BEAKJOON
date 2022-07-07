#include<stdio.h>
#include<string.h>
int main(void)
{																						//컴파일 시간초과 해결해야함.
	char s[1000001];
	scanf_s("%s", s, sizeof(s));
	int a[30];
	int max, indx = 0, indx2 = -1;
	int len = strlen(s);
	for (int i = 0; i < 30;i++)
	{
		a[i] = 0;
	}
	for (int i = 0; i < len; i++)                       // 백준1157 풀이보니까 나랑 비슷해서 다시 풀어본 문제
	{
		if (s[i] > 'Z')
		{
			a[s[i] - 'a']++;
		}
		else a[s[i] - 'A']++;
	}													//여기까지 문제 없음
	max = a[0];
	for (int i = 1; i < 26; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			indx = i;
		}
	}                                                  //indx값 25
	for (int i = 0; i < 26; i++)
	{
		if (indx == i) {
			continue;
		}
		if (a[indx] == a[i]) {
			indx2 = indx;                     //풀었다.
		}
	}
	if (indx2 == indx) {
		printf("?");
	}
	else
		printf("%c", indx + 65);



	return 0;
}