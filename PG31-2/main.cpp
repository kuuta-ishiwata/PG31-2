#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>


typedef void (*PFunc)(int*);

void DispResult(int* s)
{

	printf("%d•b‘Ò‚Â\n", *s);

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

	printf("0‚©1‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("&d", &b);

	if (b == 0)
	{
		if (Dice % 2 == 0)
		{
			SetTimeout(a, c);

			printf("³‰ğ\n");

		}
		else
		{
			SetTimeout(a, c);
			printf("•s³‰ğ\n");

		}
	}
	else
	{
		if (Dice % 2 == 1)
		{
			SetTimeout(a, c);

			printf("³‰ğ\n");
		}
		else
		{
			SetTimeout(a, c);

			printf("•s³‰ğ\n");

		}
	}

	printf("³‰ğ‚Í %d ‚Å‚µ‚½", Dice);

	return 0;


}