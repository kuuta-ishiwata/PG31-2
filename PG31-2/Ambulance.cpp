#include "Ambulance.h"
Ambulance::Ambulance()
{
	Name_ = "�~�}��";
	printf("%s�������Ă���\n", Name_);
}

Ambulance::~Ambulance()
{
	printf("%s�͑��苎����\n", Name_);
}

void Ambulance::Purr()
{
	printf("%s�̉����Ȃ��Ă���\n", Name_);
}
