#include "combathandler.h"
#include <iostream>

CombatHandler::CombatHandler() { };

void CombatHandler::GetCombatants(Unit* first, Unit* second)
{
	_first = first;
	_second = second;
}

void CombatHandler::AttemptCombat()
{
	while (_validCombatants) {
		CommenceRound();
	}
}

void CombatHandler::CommenceRound()
{
	Unit* aggressor;
	Unit* defender;

	if (_isFirstAttacking) {
		aggressor = _first;
		defender = _second;
	}
	else {
		aggressor = _second;
		defender = _first;
	}
	cout << "--- Round " << _round << " ---" << endl;
	aggressor->Attack(defender);
	cout << defender->GetName() << " hp: " << defender->GetHealth() << endl;
	cout << "---------------" << endl;

	if (defender->CheckDeath()) {
		CleanUpCombat(defender);
	}

	_round++;
	_isFirstAttacking = !_isFirstAttacking;
}


void CombatHandler::CleanUpCombat(Unit* unit)
{
	string victor;

	cout << unit->GetName() << " doesn't recover from the blow!" << endl;
	cin >> victor;
	_validCombatants = false;

	delete unit;
	_victories += 1;
}