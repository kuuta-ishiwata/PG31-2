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
	std::function<void(int*)> fx = [](int* s) {printf("%d•b‘Ò‚Â\n", *s); };
	srand((unsigned int)time(NULL));

	int b = 0;
	int c = 3;
	
	int Dice;

	Dice = rand() % 6 + 1;
	

	printf("0‚©1‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("&d", &b);

	if (b == 0)
	{
		if (Dice % 2 == 0)
		{
			SetTimeout(fx, c);

			printf("³‰ğ\n");

		}
		else
		{
			SetTimeout(fx, c);
			printf("•s³‰ğ\n");

		}
	}
	else
	{
		if (Dice % 2 == 1)
		{
			SetTimeout(fx, c);

			printf("³‰ğ\n");
		}
		else
		{
			SetTimeout(fx, c);

			printf("•s³‰ğ\n");

		}
	}

	printf("³‰ğ‚Í %d ‚Å‚µ‚½", Dice);

	return 0;


}