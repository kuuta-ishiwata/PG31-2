#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>


typedef void (*PFunc)(int*);

void DispResult(int* s)
{

	printf("%d�b�҂�\n", *s);

}

void SetTimeout(PFunc p, int& second)
{
	p(&second);
	Sleep(second * 1000);

}

int main()
{

	srand((unsigned int)time(NULL));

	int n = 0;
	int m = 3;
	int Dice;
	Dice = rand() % 6 + 1;


	PFunc p;
	p = DispResult;

	printf("0��1����͂��Ă�������\n");

	scanf_s("&d", &n);

	SetTimeout(p, m);

	if (n == 0)
	{
		if (Dice % 2 == 0)
		{
			

			printf("����\n");

		}
		else
		{
			
			printf("�s����\n");

		}
	}
	else
	{
		if (Dice % 2 == 1)
		{

			printf("����\n");
		}
		else
		{
			
			printf("�s����\n");

		}
	}

	printf("������ %d �ł���", Dice);

	return 0;


}