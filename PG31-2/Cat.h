#pragma once
class Cat
{
public:

	Cat();

	virtual ~Cat();

	virtual void Cry() = 0;;

protected:

	const char* name;

};

