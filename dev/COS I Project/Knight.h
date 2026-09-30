#pragma once
#include "Hero.h"


class Knight : public Hero
{

	int stamina;

public:

	Knight KnightSlash();

	Knight ShieldUp();

	Knight HealUp();
};

