#pragma once

class FPlayer
{
public:
	FPlayer(); //Constructor
	~FPlayer(); //Destructor

	int Gold;
	int HP;
	int Direction;

	void Move();
	void Attack();
	void Dead();
	void Collect();
	void DecreaseHP();
};

