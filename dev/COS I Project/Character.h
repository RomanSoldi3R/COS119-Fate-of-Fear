#pragma once
#include <string>

class Character
{

	std::string name;
	int health;
	int attackPower;

public:

	Character(const std::string& _name, int _health, int _attackPower);

	void TakeDmg(int dmg);

	void Heal(int heal);

	bool IsAlive() const;

	std::string GetName() const;
	int GetHealth() const;
	int GetAttackPower() const;

	virtual ~Character();


};

