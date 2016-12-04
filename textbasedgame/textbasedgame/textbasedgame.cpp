// textbasedgame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Models/greeter/greeter.h"
#include "Models/unit/unit.h"

using namespace std;

void main()
{
	string myString;
	string mySecondString;

	Unit* unit = new Unit("user anth", 4, 5);
	unit->move(5, 6);
	cout << "we moved!" << endl;

	Greeter* greeter = new Greeter();
	greeter->askName();
	greeter->sayGreeting();

	cin >> myString;
	cout << myString << endl;
	cin >> mySecondString;
}

