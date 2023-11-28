
#include <stdio.h>

#include "Police.h"
#include "Ambulance.h"

int main()
{
	printf("oŒ»\n");
	Car* Cars[2];

	Cars[0] = new Police;
	Cars[1] = new Ambulance;

	printf("\n™ôšK\n");

	Cars[0]->Purr();
	Cars[1]->Purr();

	printf("\n‹A‘î\n");
	for (int i = 0; i < 2; i++)
	{
		delete Cars[i];
	}

	return 0;
}