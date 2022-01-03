#include "Game.h"

Game::Game(float width, float height)
{
	if (!font.loadFromFile("Fonts/Gidole-Regular.ttf"))
	{
		//Printing error to console
	}
	text.setFont(font);
	text.setFillColor(sf::Color::White);
	text.setString("testi");
	text.setPosition(sf::Vector2f(width / 2, (height / 2)));
	
	
}

void Game::draw(sf::RenderWindow& window)
{
	sf::VertexArray testi(sf::Quads, 100);
	testi[0].position = sf::Vector2f(200, 150);
	testi[0].color = sf::Color::Green;
	window.draw(testi);
	window.draw(text);
}

void Game::init_arrays()
{
	for (int i = 0; i < 100; i++)
	{
		player_ship[i] = 0;
		enemy_ship[i] = 0;
	}
}
