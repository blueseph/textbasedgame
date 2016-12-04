#pragma once

#include "../unit/unit.h"

#include <string>
using namespace std;

#ifndef CharacterFactory_H
#define CharacterFactory_H

class CharacterFactory
{
	private:
		bool _isCreated = false;

	public:
		Unit* createHero();
		Unit* createOrc();
};

#endif