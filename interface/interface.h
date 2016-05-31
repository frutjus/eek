#pragma once

#include <SDL2/SDL.h>

using namespace std;

#include "../game/game.h"
#include "../game/input.h"

class Interface
{
	Game* game;
	Input input;
	
	public:
	Interface(Game &);
	~Interface();
	void display();
	void getInput();
};

Interface::Interface(Game &g)
{
	game = &g;
}

Interface::~Interface()
{
	
}

void Interface::display()
{
	
}

void Interface::getInput()
{
	game.record_input(input);
}