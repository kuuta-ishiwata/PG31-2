#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>


typedef void (*PFunc)(int*);

void DispResult(int* s)
{

	printf("%d秒待つ\n", *s);

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

	printf("0か1を入力してください\n");
	scanf_s("&d", &b);

	if (b == 0)
	{
		if (Dice % 2 == 0)
		{
			SetTimeout(a, c);

			printf("正解\n");

		}
		else
		{
			SetTimeout(a, c);
			printf("不正解\n");

		}
	}
	else
	{
		if (Dice % 2 == 1)
		{
			SetTimeout(a, c);

			printf("正解\n");
		}
		else
		{
			SetTimeout(a, c);

			printf("不正解\n");

		}
	}

	printf("正解は %d でした", Dice);

	return 0;


}