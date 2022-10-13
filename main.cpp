#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

using namespace std;

//public
// 공개,    상속 O
//protected
// 공개 X,  상속 O
//private
// 공개 X,  상속 X


int main() //entry point
{

	FPlayer Player;
	Player.MyMesh.Load();

	FGoblin Goblin;
	Goblin.MyMesh.Load();

	return 0;
}