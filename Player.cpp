#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
	cout << "Player ������" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FPlayer::~FPlayer()
{
	cout << "Player �Ҹ���" << endl;
}

void FPlayer::Move()
{
	cout << "Player �̵��Ѵ�." << endl;
}

void FPlayer::Attack()
{
	cout << "Player �����Ѵ�." << endl;
}

void FPlayer::Dead()
{
	cout << "Player �״´�." << endl;
}

void FPlayer::Collect()
{
	cout << "Player ������." << endl;
}

void FPlayer::DecreaseHP()
{
	cout << "Player HP �پ���." << endl;
}
