#include "Ambulance.h"
Ambulance::Ambulance()
{
	Name_ = "救急車";
	printf("%sが走っている\n", Name_);
}

Ambulance::~Ambulance()
{
	printf("%sは走り去った\n", Name_);
}

void Ambulance::Purr()
{
	printf("%sの音がなっている\n", Name_);
}
