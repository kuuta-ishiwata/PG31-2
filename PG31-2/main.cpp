#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
#include <functional>



void SetTimeout(std::function<void(int*)> a, int& second)
{
	a(&second);
	Sleep(second * 1000);

}

int main()
{
	std::function<void(int*)> fx = [](int* s) {printf("%d秒待つ\n", *s); };
	srand((unsigned int)time(NULL));

	int b = 0;
	int c = 3;
	
	int Dice;

	Dice = rand() % 6 + 1;
	

	printf("0か1を入力してください\n");
	scanf_s("&d", &b);

	if (b == 0)
	{
		if (Dice % 2 == 0)
		{
			SetTimeout(fx, c);

			printf("正解\n");

		}
		else
		{
			SetTimeout(fx, c);
			printf("不正解\n");

		}
	}
	else
	{
		if (Dice % 2 == 1)
		{
			SetTimeout(fx, c);

			printf("正解\n");
		}
		else
		{
			SetTimeout(fx, c);

			printf("不正解\n");

		}
	}

	printf("正解は %d でした", Dice);

	return 0;


}