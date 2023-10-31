#pragma once
class Enemy
{
private:
	
	enum Phase
	{

	};

public:

	void Update();

private:

	void Approach();
	void Leave();

private:
	Phase phase_;
		

};



