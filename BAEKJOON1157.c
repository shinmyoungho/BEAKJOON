#include<stdio.h>
#include<string.h>
int main(void)
{																						//������ �ð��ʰ� �ذ��ؾ���.
	char s[1000001];
	scanf_s("%s", s, sizeof(s));
	int a[30];
	int max, indx = 0, indx2 = -1;
	int len = strlen(s);
	for (int i = 0; i < 30;i++)
	{
		a[i] = 0;
	}
	for (int i = 0; i < len; i++)                       // ����1157 Ǯ�̺��ϱ� ���� ����ؼ� �ٽ� Ǯ� ����
	{
		if (s[i] > 'Z')
		{
			a[s[i] - 'a']++;
		}
		else a[s[i] - 'A']++;
	}													//������� ���� ����
	max = a[0];
	for (int i = 1; i < 26; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			indx = i;
		}
	}                                                  //indx�� 25
	for (int i = 0; i < 26; i++)
	{
		if (indx == i) {
			continue;
		}
		if (a[indx] == a[i]) {
			indx2 = indx;                     //Ǯ����.
		}
	}
	if (indx2 == indx) {
		printf("?");
	}
	else
		printf("%c", indx + 65);



	return 0;
}