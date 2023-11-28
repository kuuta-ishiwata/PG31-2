#pragma once
#include "Car.h"

class Police : public Car
{
public:

	Police();
	~Police() override;


	void Purr() override;

private:


};

