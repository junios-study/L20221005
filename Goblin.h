#pragma once
class FGoblin
{
public:
	FGoblin();

	int Gold;
	int HP;
	int Direction;

	void Move();
	void Attack();
	void Dead();
	void DecreaseHP();
};

