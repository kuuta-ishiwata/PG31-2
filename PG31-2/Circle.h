#pragma once
#include<stdio.h>
#include"IShape.h"
#include <numbers>


class Circle : public IShape
{


public:
	

	void Size()override;

	void Draw()override;

private:
	
	float radius_ = 10.0f;

	float pi_ = 3.14f;

};