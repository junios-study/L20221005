#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;

//public
// ����,    ��� O
//protected
// ���� X,  ��� O
//private
// ���� X,  ��� X


int main() //entry point
{

	FPlayer Player;
	Player.MyMesh.Load();

	FGoblin Goblin;
	Goblin.MyMesh.Load();

	return 0;
}