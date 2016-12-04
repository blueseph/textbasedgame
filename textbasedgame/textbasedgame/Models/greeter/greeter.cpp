#include "greeter.h"
#include <iostream>
#include <string>

using namespace std;

Greeter::Greeter()
{
	defaultQuestion = "Who are you?";
	defaultGreeting = "Fuck this shit";
}

Greeter::Greeter(string question, string greeting)
{
	defaultQuestion = question;
	defaultGreeting = greeting;
}

void Greeter::askName()
{
	cout << defaultQuestion << endl;
	cin >> name;
}

void Greeter::sayGreeting()
{
	cout << defaultGreeting << ", " << name << endl;
}