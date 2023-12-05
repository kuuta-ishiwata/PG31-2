#pragma once
class Dog
{

public:

	Dog();

	virtual ~Dog();

	virtual void Cry() = 0;;

protected:

	const char* name;


};

