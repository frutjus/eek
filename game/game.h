#pragma once

#include <memory>
#include <iostream>

#include "input.h"
#include "activity.h"

using namespace std;

class Game
{
	bool isrunning;
	unique_ptr<Activity> current_activity; //using a pointer wrapper for no reason in particular.
	
	public:
	Game();
	~Game();
	bool running();
	void play();
	void record_input(Input&);
};

Game::Game()
{
	isrunning = true;
	
	current_activity = new Ignition_activity;
	
	cout << "Starting game" << endl;
}

Game::~Game()
{
	cout << "Ending game" << endl;
}

bool Game::running()
{
	//if (!isrunning) return iswalking;
	return isrunning;
}

void Game::play()
{
	current_activity = current_activity->process();
	if (current_activity = 0) //I dunno
	{
		isrunning = false;
	}
}

void Game::record_input(Input& input)
{
	current_activity->record_input(input);
}