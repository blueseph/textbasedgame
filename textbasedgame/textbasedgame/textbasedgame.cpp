// textbasedgame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Models/greeter/greeter.h"
#include "Models/unit/unit.h"
#include "Models\character_factory\characterfactory.h"

#include <vector>
using namespace std;

void main()
{
	CharacterFactory* characterFactory = new CharacterFactory();
	Unit* player = characterFactory->createHero();
	vector<Unit*>* orcs = new vector<Unit*>();
	orcs->push_back(characterFactory->createOrc());
}