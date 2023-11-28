#include "Ambulance.h"
Ambulance::Ambulance()
{
	Name_ = "‹~‹}ŽÔ";
	printf("%s‚ª‘–‚Á‚Ä‚¢‚é\n", Name_);
}

Ambulance::~Ambulance()
{
	printf("%s‚Í‘–‚è‹Ž‚Á‚½\n", Name_);
}

void Ambulance::Purr()
{
	printf("%s‚Ì‰¹‚ª‚È‚Á‚Ä‚¢‚é\n", Name_);
}
