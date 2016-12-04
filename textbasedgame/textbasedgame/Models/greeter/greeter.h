#pragma once
#include <string>
#include <iostream>

#ifndef Greeter_H
#define Greeter_H

using namespace std;

class Greeter
{
	string name;
	string defaultQuestion;
	string defaultGreeting;

public:
	Greeter();
	Greeter(string question, string greeting);
	void askName();
	void sayGreeting();
};

#endif
