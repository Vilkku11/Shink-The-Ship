#include "SFML/Graphics.hpp"
#include "Main_Menu.h"
#include <iostream>
int main() {

	
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Sink The Ship");


	Main_Menu menu(window.getSize().x, window.getSize().y);



	sf::Event event;

	while (window.isOpen()) 
	{

		while (window.pollEvent(event)) 
		{

			switch (event.type)
			{
				//Movement in main menu
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.move_up();
					break;
				case sf::Keyboard::Down:
					menu.move_down();
					break;
				}
			}
			//Closing window
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			window.clear();

			menu.draw(window);

			window.display();
		}
	}


	
	return 0;
}