#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
	cout << "Goblin ������" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

void FGoblin::Move()
{
	cout << "Goblin �̵��Ѵ�." << endl;
}

void FGoblin::Attack()
{
	cout << "Goblin �����Ѵ�." << endl;

}

void FGoblin::Dead()
{
	cout << "Goblin �״´�." << endl;

}

void FGoblin::DecreaseHP()
{
	cout << "Goblin HP �پ���." << endl;
}
