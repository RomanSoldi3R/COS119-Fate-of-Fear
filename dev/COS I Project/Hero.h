#pragma once
#include <iostream>
#include <string>


class Hero
{
	
	std::string name;
	int health;
	int attackPower;

public:

	Hero(const std::string& _name, int _health, int _attackPower);

	void PrintStats(const Hero& hero);

};

