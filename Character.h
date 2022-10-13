#pragma once
#include <string>

using namespace std;

class Mesh
{
public:
	void Load()
	{

	}
};

class FCharacter
{
public: //이건 상속
	FCharacter();
	~FCharacter();

	void Move();
	void Attack();
	void Dead();

	Mesh MyMesh;
	 
protected: // 이건 상속 안해주는거
	void DecreaseHP();

	int Gold;
	int HP;
	int Direction;

	string Type;

//private:
//	int Test;
};

