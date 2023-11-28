#include "Police.h"


Police::Police()
{
	Name_ = "パトカー";
	printf("%sが走っている\n", Name_);
}

Police::~Police()
{

	printf("%sは走り去った\n", Name_);
}


void Police::Purr()
{
	printf("%sの音がなっている\n", Name_);
}

