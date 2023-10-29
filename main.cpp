#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;

// Variable
Texture texture;
Sprite sprite;

int main() {
	// Cargamos la textura del archivo
	texture.loadFromFile("plataforma.jpg");

	// Cargamos el material del sprite
	sprite.setTexture(texture);

	// Defino la posicion inicial del sprite
	sprite.setPosition(400, 300);

	// Creamos la ventana de nuestro juego
	sf::RenderWindow ventana(sf::VideoMode(800, 600, 32), "Usando la rotación de una imagen");

	//Ahora creamos el loop principal
	while (ventana.isOpen()) {
		// Limpiamos la ventana
		ventana.clear();

		sprite.rotate(30);
		ventana.draw(sprite);

		// Mostramos la ventana
		ventana.display();

	}
	
	return 0;
	
}