#include "unit.h"
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

	recalc_hp();
}

Unit::Unit(string name, int strength, int intellect, int dexterity, int constitution)
{
	_name = name;
	_strength = strength;
	_intellect = intellect;
	_dexterity = dexterity;
	_constitution = constitution;

	recalc_hp();
}

void Unit::recalc_hp()
{
	int hpDifference;
	hpDifference = _currHp - _maxHp;

	_maxHp = _constitution * CONST_MULT;
	_currHp = _maxHp - hpDifference;
}

