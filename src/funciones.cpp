#include "funciones.h"

void mEnemigo(sf::RectangleShape &enemigo, float dt)
{
    enemigo.move(10 * dt, 0.f);
}
