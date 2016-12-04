#pragma once
#include <string>
using namespace std;

#ifndef Unit_H
#define Unit_H

class Unit 
{
	private:
		int _strength;
		int _intellect;
		int _dexterity;
		int _constitution;
		int _currHp = 1;
		int _maxHp = 1;
		string _name;

		const int CONST_MULT = 8;
		const int DAMAGE_MULT = 5;

		void RecalcHp();
	public:
		Unit();
		Unit(string name);
		Unit(string name, int strength, int intellect, int dexterity, int con);

		string GetName();
		int GetHealth();

		void Attack(Unit* unit);
		void ApplyDamage(int damage);
		bool CheckDeath();
};

#endif