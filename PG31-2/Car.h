#pragma once
#include<stdio.h>

class Car
{
public:

	Car();

	virtual ~Car();

	virtual void Purr();


protected:

	const char* Name_;

};

