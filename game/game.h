#pragma once

class Game
{
	bool isrunning;
	
	public:
	Game();
	~Game();
	bool running();
};

Game::Game()
{
	isrunning = true;
}

Game::~Game()
{
	
}

bool Game::running()
{
	return isrunning;
}
