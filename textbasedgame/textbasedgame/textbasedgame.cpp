// textbasedgame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "greeter\greeter.h"

using namespace std;


void main()
{
	string myString;
	string mySecondString;

	Greeter* greeter = new Greeter();
	greeter->askName();
	greeter->sayGreeting();

	cin >> myString;
	cout << myString << endl;
	cin >> mySecondString;

	
}

