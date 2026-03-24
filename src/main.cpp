#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mi Proyecto SFML");
    window.setFramerateLimit(60);

    sf::CircleShape circulo(100.f);
    circulo.setFillColor(sf::Color(100, 200, 255));
    circulo.setOrigin(100.f, 100.f);
    circulo.setPosition(400.f, 300.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed &&
                event.key.code == sf::Keyboard::Escape)
                window.close();
        }

        circulo.rotate(1.f);

        window.clear(sf::Color(30, 30, 30));
        window.draw(circulo);
        window.display();
    }

    return 0;
}