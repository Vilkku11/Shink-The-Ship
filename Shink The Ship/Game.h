#pragma once
#include "SFML/Graphics.hpp"
class Game
{
public:
	Game(float witdth, float height);
	void draw(sf::RenderWindow& window);
	void init_arrays();
private:
	int player_ship[100];
	int enemy_ship[100];
	sf::Text text;
	sf::Font font;
	
};

