#pragma once
#include "PCH.hpp"


class Map :sf::Drawable
{
public:
	Map();
	~Map();
	sf::Vector2i mapSize;
	std::vector<std::vector<short>> logicTextures;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

