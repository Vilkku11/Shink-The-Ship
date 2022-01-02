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
			case sf::Event::KeyPressed:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.move_up();
					break;
				case sf::Keyboard::Down:
					menu.move_down();
					break;
				case sf::Keyboard::Return:
					switch (menu.pressed_key())
					{
					case 0:
						std::cout << "Play" << std::endl;
						break;
					case 1:
						std::cout << "Settings" << std::endl;
						break;
					case 2:
						std::cout << "Exit" << std::endl;
						break;
					}
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