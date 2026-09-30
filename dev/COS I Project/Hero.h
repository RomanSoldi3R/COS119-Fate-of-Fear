#pragma once
#include "Character.h"


class Hero : public Character 
{

public:

	Hero(const std::string& _name, int _health, int _attackPower);

	void PrintStats(const Hero& hero);

};

