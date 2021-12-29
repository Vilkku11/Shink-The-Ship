#include "Main_Menu.h"

Main_Menu::Main_Menu(float width, float height)
{
	if (!font.loadFromFile("Fonts/Gidole-Regular.ttf"))
	{
	   //Printing error to console
	}
	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::White);
	menu[0].setString("Play");
	menu[0].setPosition(sf::Vector2f(width / 2, (height/2)+(-50)));

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::Blue);
	menu[1].setString("Options");
	menu[1].setPosition(sf::Vector2f(width / 2, (height / 2)));

	menu[2].setFont(font);
	menu[2].setFillColor(sf::Color::Blue);
	menu[2].setString("Exit");
	menu[2].setPosition(sf::Vector2f(width / 2, (height / 2) +50));
}

void Main_Menu::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		window.draw(menu[i]);
	}
}