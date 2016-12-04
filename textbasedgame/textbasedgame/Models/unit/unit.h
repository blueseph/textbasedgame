#pragma once
#include <string>
using namespace std;

#ifndef Unit_H
#define Unit_H

class Unit 
{
	private:
		string _name;
		int _strength;
		int _intellect;
		int _dexterity;
		int _constitution;
		int _currHp = 1;
		int _maxHp = 1;

		const int CONST_MULT = 8;

	public:
		Unit();
		Unit(string name);
		Unit(string name, int strength, int intellect, int dexterity, int con);
		void recalc_hp();
};

#endif