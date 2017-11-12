#pragma once
#ifndef EDITOR_GUARD

#include "PCH.hpp"
#define EDITOR_GURAD

class Editor
{
	sf::RenderWindow window;
	sf::Event evnt;
	sf::Time timer, accumulator;
	sf::Clock clock;
public:
	Editor();
	~Editor();
	void run();
	void exit();
};





#endif // !EDITOR_GUARD