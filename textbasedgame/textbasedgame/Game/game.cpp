#include "game.h"
#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

Game::Game()
{
	_tickRate = 100;
	InitMembers();
}

Game::Game(int tickrate)
{
	_tickRate = tickrate;
	InitMembers();
}

void Game::InitMembers()
{
	_messages = new vector<string>();
}

void Game::RunLoop()
{
	LONG last_tick_ms = GetTimeInMilliseconds();
	do 
	{
		LONG current_time = GetTimeInMilliseconds();
		if (current_time - last_tick_ms > _tickRate)
		{
			ProcessQueue();
			last_tick_ms = current_time;
			_isRunning = false;
		}
	} 
	while (_isRunning);
}

LONG Game::GetTimeInMilliseconds() 
{
	SYSTEMTIME time;
	GetSystemTime(&time);
	LONG time_ms = (time.wSecond * 1000) + time.wMilliseconds;
	return time_ms;
}

void Game::AskForInput()
{
}

void Game::AddMessage(string message) 
{
	_messages->push_back(message);
}

void Game::ProcessQueue()
{
	for (auto &msg : *_messages)
	{
		cout << msg << endl;
	}
	_messages->clear();
}

Game::~Game()
{
	delete _messages;
}

void Game::Start()
{
	if (_tickRate > 0) 
	{ 
		RunLoop(); 
	}
	string wait;
	cout << "we're done here." << endl;
	cin >> wait;
}
