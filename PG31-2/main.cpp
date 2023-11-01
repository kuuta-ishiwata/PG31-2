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

	int evennumber = 0;
	int oddnumber = 3;
	int dice;

	dice = rand() % 6 + 1;
	printf("0��1����͂��Ă�������\n");
	scanf_s("&d", &evennumber);

	SetTimeout(fx, oddnumber);

	if (evennumber == dice % 2)
	{
		printf("����\n");

	}
	else
	{

		printf("�s����\n");

	}

	printf("������ %d �ł���", dice);

	return 0;


}