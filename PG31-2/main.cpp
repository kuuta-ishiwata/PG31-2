#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>


typedef void (*PFunc)(int*);

void DispResult(int* s)
{

	printf("%d�b�҂�\n", *s);

}

void SetTimeout(PFunc a, int& second)
{
	a(&second);
	Sleep(second * 1000);

}

int main()
{

	srand((unsigned int)time(NULL));

	int b = 0;
	int c = 3;
	
	int Dice;

	Dice = rand() % 6 + 1;
	PFunc a;
	a = DispResult;

	printf("0��1����͂��Ă�������\n");
	scanf_s("&d", &b);

	if (b == 0)
	{
		if (Dice % 2 == 0)
		{
			SetTimeout(a, c);

			printf("����\n");

		}
		else
		{
			SetTimeout(a, c);
			printf("�s����\n");

		}
	}
	else
	{
		if (Dice % 2 == 1)
		{
			SetTimeout(a, c);

			printf("����\n");
		}
		else
		{
			SetTimeout(a, c);

			printf("�s����\n");

		}
	}

	printf("������ %d �ł���", Dice);

	return 0;


}