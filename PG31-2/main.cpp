#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
#include <functional>



void SetTimeout(std::function<void(int*)> p, int& second)
{
	p(&second);
	Sleep(second * 1000);

}

int main()
{
	std::function<void(int*)> fx = [](int* s) {printf("%d秒待つ\n", *s); };
	srand((unsigned int)time(NULL));

	int n = 0;
	int m = 3;
	int dice;

	dice = rand() % 6 + 1;
	printf("0か1を入力してください\n");
	scanf_s("&d", &n);

	SetTimeout(fx, m);

	if (n == 0)
	{
		if (dice % 2 == 0)
		{
			

			printf("正解\n");

		}
		else
		{
			
			printf("不正解\n");

		}
	}
	else
	{
		if (dice % 2 == 1)
		{
			
			printf("正解\n");
		}
		else
		{
			
			printf("不正解\n");

		}
	}

	printf("正解は %d でした", dice);

	return 0;


}