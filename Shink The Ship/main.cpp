#include "SFML/Graphics.hpp"
#include "Main_Menu.h"
#include <iostream>
int main() {

	
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Sink The Ship");


	Main_Menu menu(window.getSize().x, window.getSize().y);



	sf::Event e;

	while (window.isOpen()) {

		while (window.pollEvent(e)) {

			if (e.type == sf::Event::Closed) {
				window.close();
			}
		}
	

		window.clear();

		menu.draw(window);

		window.display();
	}


	
	return 0;
}