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
	std::function<void(int*)> fx = [](int* s) {printf("%d�b�҂�\n", *s); };
	srand((unsigned int)time(NULL));

	int n = 0;
	int m = 3;
	int dice;

	dice = rand() % 6 + 1;
	printf("0��1����͂��Ă�������\n");
	scanf_s("&d", &n);

	SetTimeout(fx, m);

	if (n == 0)
	{
		if (dice % 2 == 0)
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
		if (dice % 2 == 1)
		{
			
			printf("����\n");
		}
		else
		{
			
			printf("�s����\n");

		}
	}

	printf("������ %d �ł���", dice);

	return 0;


}