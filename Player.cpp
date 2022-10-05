#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
	cout << "Player 생성자" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FPlayer::~FPlayer()
{
	cout << "Player 소멸자" << endl;
}

void FPlayer::Move()
{
	cout << "Player 이동한다." << endl;
}

void FPlayer::Attack()
{
	cout << "Player 공격한다." << endl;
}

void FPlayer::Dead()
{
	cout << "Player 죽는다." << endl;
}

void FPlayer::Collect()
{
	cout << "Player 모은다." << endl;
}

void FPlayer::DecreaseHP()
{
	cout << "Player HP 줄어든다." << endl;
}
