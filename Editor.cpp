#include "Editor.hpp"

Editor::Editor()
	:window(sf::VideoMode(1080,720), "MapEditor", sf::Style::Default)
{

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

			}
		}
	}


}

void Editor::exit()
{
	window.close();
}
