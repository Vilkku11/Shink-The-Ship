#include "SFML/Graphics.hpp"
int main() {


	sf::RenderWindow window(sf::VideoMode(1280, 720), "testi");
	sf::Event e;

	while (window.isOpen()) {

		while (window.pollEvent(e)) {

			if (e.type == sf::Event::Closed) {
				window.close();
			}
		}
		
	}
	return 0;
}