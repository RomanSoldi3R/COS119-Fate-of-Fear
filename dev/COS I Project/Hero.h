#pragma once
#include "Character.h"


class Hero : public Character 
{

public:

	Hero(const std::string& _name, int _health, int _attackPower);		// constructor

	virtual void TakeTurn(Character& target) = 0;						// pure virtual method so it distinguishes between each hero's abilities

};

