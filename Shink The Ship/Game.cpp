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
	sf::VertexArray testi(sf::Quads, 4);
	testi[0].position = sf::Vector2f(200, 150);
	testi[0].color = sf::Color::White;
	testi[0].texCoords = sf::Vector2f(0.f, 0.f);

	testi[1].position = sf::Vector2f(220, 150);
	testi[1].color = sf::Color::White;
	testi[1].texCoords = sf::Vector2f(25.f, 50.f);

	testi[2].position = sf::Vector2f(230, 150);
	testi[2].color = sf::Color::White;

	testi[3].position = sf::Vector2f(240, 150);
	testi[3].color = sf::Color::White;
	
	window.draw(testi);
	//window.draw(text);
}

void Game::init_arrays()
{
	for (int i = 0; i < 100; i++)
	{
		player_ship[i] = 0;
		enemy_ship[i] = 0;
	}
}
