#include <SFML/Graphics.hpp>
int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Graph Example");

    sf::VertexArray lines(sf::LinesStrip, 4);
    lines[0].position = sf::Vector2f(100, 500);
    lines[1].position = sf::Vector2f(200, 400);
    lines[2].position = sf::Vector2f(300, 300);
    lines[3].position = sf::Vector2f(400, 200);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(lines);
        window.display();
    }

    return 0;
}
