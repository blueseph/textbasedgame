#pragma once
#include <string>

#include "../unit/unit.h"
using namespace std;

#ifndef CombatHandler_H
#define CombatHandler_H

class CombatHandler
{
	private:
		Unit* _first;
		Unit* _second;
		int _victories = 0;
		int _round = 0;
		bool _isFirstAttacking = true;
		bool _validCombatants = true;
		void CleanUpCombat(Unit* unit);

	public:
		CombatHandler();
		void GetCombatants(Unit* first, Unit* second);
		void AttemptCombat();
		void CommenceRound();
};

#endif