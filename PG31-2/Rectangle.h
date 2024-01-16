#pragma once
#include "IShape.h"
#include <stdio.h>

class Rectangle : public IShape
{
public:



	void Size()override;

	void Draw()override;

private:

	float radius = 10.0f;
};

