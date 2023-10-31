#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>


typedef void (*PFunc)(int*);

void DispResult(int* s)
{

	printf("%d•b‘Ò‚Â\n", *s);

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

	printf("0‚©1‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

	scanf_s("&d", &n);

	SetTimeout(p, m);

	if (n == 0)
	{
		if (Dice % 2 == 0)
		{
			

			printf("³‰ğ\n");

		}
		else
		{
			
			printf("•s³‰ğ\n");

		}
	}
	else
	{
		if (Dice % 2 == 1)
		{

			printf("³‰ğ\n");
		}
		else
		{
			
			printf("•s³‰ğ\n");

		}
	}

	printf("³‰ğ‚Í %d ‚Å‚µ‚½", Dice);

	return 0;


}