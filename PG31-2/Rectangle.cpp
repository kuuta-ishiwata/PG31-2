#include<stdio.h>
#include "Rectangle.h"

void Rectangle::Size()
{
	radius = radius * radius;
}

void Rectangle::Draw()
{
	printf("%f\n", radius);
}