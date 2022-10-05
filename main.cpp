#include <iostream>
#include "Player.h"
#include "Goblin.h"

using namespace std;


int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	FGoblin* Goblin = new FGoblin();
	Goblin->Move();

	//bool IsRunning = true;

	//while (IsRunning)
	//{
	//	MyPlayer->Move();
	//	Goblin->Move();
	//}

	delete MyPlayer;
	MyPlayer = nullptr;

	delete Goblin;
	Goblin = nullptr;

	return 0;
}