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

	int evennumber = 0;
	int oddnumber = 3;
	int dice;
	dice = rand() % 6 + 1;


	PFunc p;
	p = DispResult;

	printf("0‚©1‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

	scanf_s("&d", &evennumber);

	SetTimeout(p, oddnumber);
	
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