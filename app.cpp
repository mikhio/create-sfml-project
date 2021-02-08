#include <SFML/Graphics.hpp>

int main() {
    // Create window and set FPS
    sf::RenderWindow window(sf::VideoMode(1500, 1500), "Test");
    window.setFramerateLimit(60);

    // Create shape (circle)
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {
        // Check event
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clearing, updating and drawing
        window.clear();

        window.draw(shape);

        window.display();
    }

    return 0;
}