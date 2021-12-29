#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>

#define MAX_ITEMS 3

class Main_Menu
{
public:
	Main_Menu(float width, float height);

	void draw(sf::RenderWindow& window);
	void move_up();
	void move_down();
private:
	int selected_items;
	sf::Font font;
	sf::Text menu[MAX_ITEMS];
};
