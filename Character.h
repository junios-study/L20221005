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
public: //�̰� ���
	FCharacter();
	~FCharacter();

	void Move();
	void Attack();
	void Dead();

	Mesh MyMesh;
	 
protected: // �̰� ��� �����ִ°�
	void DecreaseHP();

	int Gold;
	int HP;
	int Direction;

	string Type;

//private:
//	int Test;
};

