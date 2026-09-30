#include "Character.h"


Character::Character(const std::string& _name, int _health, int _attackPower) :
	name(_name),
	health(_health),
	maxHealth(_health),
	attackPower(_attackPower)
{}

void Character::TakeDmg(int dmg)
{
	if (dmg <= 0)
	{
		dmg = 0;
	}
	health = health - dmg;

	if (health < 0)
	{
		health = 0;
	}
}

void Character::Heal(int heal)
{
	if (heal <= 0)
	{
		heal = 0;
	}
	health = health + heal;
	if (health > maxHealth)
	{
		health = maxHealth;
	}
}

bool Character::IsAlive() const
{
	bool life;

	if (health <= 0)
	{
		life = false;
	}
	else
	{
		life = true;
	}
	return life;
}

std::string Character::GetName() const { return name; }
int Character::GetHealth() const { return health; }
int Character::GetMaxHealth() const { return maxHealth; }
int Character::GetAttackPower() const { return attackPower; }

Character::~Character() {}


