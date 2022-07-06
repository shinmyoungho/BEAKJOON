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
		int grade[MAX];                                       //math함수 floor내림 cell 올림
		int avr;											  //반올림하고 싶은 자리까지 *10*n 해준다음 0.5를 더하고 floor
		int sum = 0;										  // 함수 쓴다음 다시 / 10*n
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