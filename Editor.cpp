#include "Editor.hpp"

Editor::Editor()
	:window(sf::VideoMode(1080,720), "MapEditor", sf::Style::Default)
{
	window.setVerticalSyncEnabled(true);
}

Editor::~Editor()
{
}

void Editor::run()
{


	while (window.isOpen())
	{
	
		while(window.pollEvent(evnt))
		{
			if (evnt.type = sf::Event::Closed)
			{
				exit();
			}
		}
		
		sf::Color color = sf::Color::Yellow;
		//window.clear(sf::Color::Blue);
		window.display();
	}


}

void Editor::exit()
{
	window.close();
}
