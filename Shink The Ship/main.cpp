#include "SFML/Graphics.hpp"
#include "Main_Menu.h"
#include "Game.h"
#include <iostream>
#include <Windows.h>
int main() {

	
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Sink The Ship");

	bool main_menu = true;

	// Main Menu class
	Main_Menu menu(window.getSize().x, window.getSize().y);
	// Game class
	Game game(window.getSize().x, window.getSize().y);



	sf::Event event;

	while (window.isOpen()) 
	{

		while (window.pollEvent(event))
		{
			if (main_menu == true)
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
							main_menu = false;
							break;
						case 1:
							std::cout << "Settings" << std::endl;
							break;
						case 2:
							std::cout << "Exit" << std::endl;
							window.close();
							break;
						}
					}
				}
			}
			
			// Clear old frame
			window.clear();
			// Draw new frame
			if (main_menu == true)
			{
				menu.draw(window);
			}
			else if(main_menu == false)
			{
				game.draw(window);
			}
			//menu.draw(window);
			//Output new frame
			window.display();
		}
		Sleep(100);
	}


	
	return 0;
}