// textbasedgame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Game/game.h"
#include "Models/greeter/greeter.h"
#include "Models/unit/unit.h"
#include "Models\character_factory\characterfactory.h"
#include "Models\combat_handler\combathandler.h"

#include <vector>
using namespace std;

void main()
{
	//Game* game = new Game();
	//game->AddMessage("fuck this");
	//game->AddMessage("fuck this");
	//game->AddMessage("fuck this");
	//game->AddMessage("fuck this");
	//game->AddMessage("fuck this");
	//game->AddMessage("fuck this");
	//game->AddMessage("fuck this");
	//game->AddMessage("fuck this");
	//game->AddMessage("getting the address of the list of addresses so i can dereference the list to dereference the address of the address");
	//game->AddMessage("yeah fuck this");
	//game->Start();

	CharacterFactory* characterFactory = new CharacterFactory();
	Unit* player = characterFactory->createHero();

	vector<Unit*>* orcs = new vector<Unit*>();
	orcs->push_back(characterFactory->createOrc());

	CombatHandler* combatHandler = new CombatHandler();
	combatHandler->GetCombatants(player, orcs->front());
	combatHandler->AttemptCombat();
}