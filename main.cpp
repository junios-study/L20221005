#include <iostream>
#include "Player.h"

using namespace std;

#define IS_VALID(A) (A != nullptr)
#define SAFE_DELETE(A) if (A) { delete A; A = nullptr; }

int main()
{
	FPlayer* Player = new FPlayer();


	SAFE_DELETE(Player);
	delete Player;
	Player = nullptr;

	if (Player)
	{
		cout << "Player ���" << endl;
	}
	else
	{
		cout << "Player ��� ����" << endl;
	}


	return 0;
}