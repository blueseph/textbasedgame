#include <vector>
#include <string>
#include <windows.h>


#ifndef GAME_H
#define GAME_H
using namespace std;

class Game
{
	int _tickRate;
	vector<string>* _messages;
	bool _isRunning = true;
	void InitMembers();
	void RunLoop();
	LONG GetTimeInMilliseconds();
	void AskForInput();
	void ProcessQueue();
	~Game();

public:
	Game();
	Game(int tickrate);
	void AddMessage(string message);
	void Start();
};

#endif