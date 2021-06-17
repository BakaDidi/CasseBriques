#include "Raquette.h"
#include <iostream>
Raquette::Raquette()
{
    if (!text_raquette.loadFromFile("raquette.png"))
    {
        std::cout << "Erreur de chargement du sprite de la raquette" << std::endl;
    }

    raquette.setTexture(text_raquette);
    raquette.scale(2.0f, 1.5f);
}