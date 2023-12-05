#pragma once
class Bird
{
public:

	Bird();
	
	virtual ~Bird();

	virtual void Cry() = 0;;

protected:

	const char* name;



};

