using namespace std;

#include "characterfactory.h"
#include <iostream>

Unit* CharacterFactory::createHero()
{
	string name;
	cout << "Please name your character" << endl;
	cin >> name;

	string type;
	cout << "Please select a class." << endl << "Warrior" << endl << "Wizard" << endl << "Ranger" << endl;
	cin >> type;

	cout << name << ", you are a " << type << endl;
	cin >> type;

	Unit* unit = new Unit(name, 1, 1, 1, 1);

	
	return unit;
}

Unit* CharacterFactory::createOrc()
{
	Unit* unit = new Unit("An orc", 1, 1, 1, 1);

	return unit;
}
