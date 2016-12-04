#include "game.h"
#include "../Message/message.h"
#include <string>
#include <iostream>

using namespace std;

Game::Game()
{
	_tickRate = 30;
	_messages = new std::vector<Message*>();
}

Game::Game(int tickrate)
{
	_tickRate = tickrate;
}

void Game::RunLoop()
{
	do {
		ProcessQueue();
	} while (_isRunning);
}

void Game::AskForInput()
{
}

Message* Game::AddMessage(std::string message) 
{
	Message nextMessage = new Message();
}

void Game::ProcessQueue()
{
	for (int i = _messages.begin(); i != _messages.end(); i++)
	{
		cout << "thing";
	}
}

void Game::Start()
{
	if (_tickRate > 0) 
	{ 
		RunLoop(); 
	}
}
