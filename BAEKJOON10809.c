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
	for (int i = 0; i < strlen(c); i++)							//�迭 a�� 1���� a ~ z�� �Ѵ�
	{															//�ƽ�Ű�ڵ� 97�� a �̱� ������ -96�� ���ָ� 1�� �ȴ�
		if (a[c[i] - 96] == -1)									// �׷��Ƿ� �ε����� 1���� �����ؼ� �� ����
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