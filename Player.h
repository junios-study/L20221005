#pragma once
#include "Character.h"
#include "Slime.h"

class FPlayer : public FCharacter
{
public:
	FPlayer(); //Constructor
	~FPlayer(); //Destructor

	void Collect();
};

