#include "Balle.h"
#pragma once

/// <summary>
/// Classe Raquette : Classe permettant de gérer la raquette, sa position, sa taille, et sa texture/sprite
/// </summary>
class Raquette
{
#pragma region Attributes
public:
	/// <summary>
	/// Largeur de la raquette
	/// </summary>
	int larg_R = 106;

	/// <summary>
	/// Hauteur de la raquette
	/// </summary>
	int haut_R = 24;

	/// <summary>
	/// Position en x de la raquette
	/// </summary>
	int pos_x_r = 629;

	/// <summary>
	/// Position en y de la raquette
	/// </summary>
	int pos_y_r = 670;

	/// <summary>
	/// Vitesse de la raquette
	/// </summary>
	int vitesse_raquette = 40;

	/// <summary>
	/// Texture de la raquette
	/// </summary>
	sf::Texture text_raquette;

	/// <summary>
	/// Sprite de la raquette
	/// </summary>
	sf::Sprite raquette;
#pragma endregion
#pragma region Constructor
	/// <summary>
	/// Constructeur de la classe Raquette
	/// </summary>
	Raquette();
#pragma endregion
};

