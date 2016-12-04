#include <vector>
#include <string>
#include "../Message/message.h"

#ifndef GAME_H
#define GAME_H

class Game
{
	int _tickRate;
	std::vector<Message*>* _messages;
	bool _isRunning = true;
	void RunLoop();
	void AskForInput();
	void ProcessQueue();

public:
	Game();
	Game(int tickrate);
	Message* AddMessage(std::string message);
	void Start();
};

#endif