#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
	cout << "Goblin 생성자" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

void FGoblin::Move()
{
	cout << "Goblin 이동한다." << endl;
}

void FGoblin::Attack()
{
	cout << "Goblin 공격한다." << endl;

}

void FGoblin::Dead()
{
	cout << "Goblin 죽는다." << endl;

}

void FGoblin::DecreaseHP()
{
	cout << "Goblin HP 줄어든다." << endl;
}
