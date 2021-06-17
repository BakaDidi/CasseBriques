#include "Brique.h"
#include <SFML/Graphics.hpp>
#include <iostream>


Brique::Brique()
{
	pos_x = 1;
	pos_y = 0;
	visible = true;
}

Brique::Brique(int pos_x2, int pos_y2)
{
	pos_x = pos_x2;
	pos_y = pos_y2;
	visible = true;
}

void Brique::applique_sprite()
{
	if (!text_brique.loadFromFile("brique.png"))
	{
		std:: cout << "Erreur de chargement du sprite des briques" << std::endl;
	}

	sprite_brique.setTexture(text_brique);
}

void Brique::applique_scale()
{
	sprite_brique.scale(1.5f, 1.5f);
}
