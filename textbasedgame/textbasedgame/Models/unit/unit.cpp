#include "unit.h"
#include <iostream>
#include <string>

Unit::Unit() 
{
	_name = "Unknown";
}

Unit::Unit(string name)
{
	_name = name;
	_strength = 1;
	_intellect = 1;
	_dexterity = 1;
	_constitution = 1;

	RecalcHp();
}

Unit::Unit(string name, int strength, int intellect, int dexterity, int constitution)
{
	_name = name;
	_strength = strength;
	_intellect = intellect;
	_dexterity = dexterity;
	_constitution = constitution;

	RecalcHp();
}

string Unit::GetName()
{
	return _name;
}

int Unit::GetHealth()
{
	return _currHp;
}

void Unit::Attack(Unit* unit)
{

	//todo make this work for other types;
	int damage = _strength * DAMAGE_MULT;

	cout << _name << " deals " << damage << " points of damage to " << unit->GetName() << endl;

	unit->ApplyDamage(damage);
}

void Unit::RecalcHp()
{
	int hpDifference;
	hpDifference = _currHp - _maxHp;

	_maxHp = _constitution * CONST_MULT;
	_currHp = _maxHp - hpDifference;
}

void Unit::ApplyDamage(int damage)
{
	_currHp -= damage;
}

bool Unit::CheckDeath()
{

	return _currHp <= 0;
}


