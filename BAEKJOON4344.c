#include<stdio.h>
#include<math.h>
#define MAX 1003

int main(void)
{
	int c;
	double result[MAX];
	scanf_s("%d", &c);

	for (int i = 0; i < c; i++)
	{
		int students;
		int grade[MAX];                                       //math�Լ� floor���� cell �ø�
		int avr;											  //�ݿø��ϰ� ���� �ڸ����� *10*n ���ش��� 0.5�� ���ϰ� floor
		int sum = 0;										  // �Լ� ������ �ٽ� / 10*n
		int count = 0;
		scanf_s("%d", &students);
		for (int i = 0; i < students; i++)
		{
			scanf_s("%d", &grade[i]);
			sum = sum + grade[i];
		}
		avr = sum / students;
		for (int i = 0; i < students; i++)
		{
			if (grade[i] > avr)
			{
				count++;
			}
		}
		result[i] = (double)100.0 * count / students;

	}
	for (int i = 0; i < c; i++)
	{
		printf("%.3lf%\n", (floor(result[i] * 1000 + 0.5)) / 1000);
	}
	return 0;
}