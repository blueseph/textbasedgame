#include "unit.h"
#include <string>

Unit::Unit() 
{
	_name = "Unknown";
	_xPos = 0;
	_yPos = 0;
}

Unit::Unit(string name, int xPos, int yPos)
{
	_name = name;
	_xPos = xPos;
	_yPos = yPos;
}

bool Unit::move(int xPos, int yPos) {
	_xPos = xPos;
	_yPos = yPos;

	return true;
}

bool Unit::attack(int xPos, int yPos) {
	// todo later when we have a map

	return true;
}