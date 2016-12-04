#pragma once
#include <string>
using namespace std;

#ifndef Unit_H
#define Unit_H

class Unit 
{
	private:
		string _name;
		int _xPos;
		int _yPos;

	public:
		Unit();
		Unit(string name, int xPos, int yPos);
		bool move(int xPos, int yPos);
		bool attack(int xPos, int yPos);
};

#endif