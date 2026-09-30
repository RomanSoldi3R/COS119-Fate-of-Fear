#pragma once
#include "Hero.h"
#include <vector>


class Sorcerer : public Hero
{

	int mana;
	std::string spell;
	std::vector<std::string> spellBook;

public:

	Sorcerer FireBall();

	Sorcerer HydroBlast();

	Sorcerer Heal();

	void SpellBook(const std::string& spell);

};

