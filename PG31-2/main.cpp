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
	std::function<void(int*)> fx = [](int* s) {printf("%d•b‘Ò‚Â\n", *s); };
	srand((unsigned int)time(NULL));

	int evennumber = 0;
	int oddnumber = 3;
	int dice;

	dice = rand() % 6 + 1;
	printf("0‚©1‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("&d", &evennumber);

	SetTimeout(fx, oddnumber);

	if (evennumber == dice % 2)
	{
		printf("³‰ğ\n");

	}
	else
	{

		printf("•s³‰ğ\n");

	}

	printf("³‰ğ‚Í %d ‚Å‚µ‚½", dice);

	return 0;


}