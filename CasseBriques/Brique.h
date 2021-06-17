# include <SFML/Graphics.hpp>

#pragma once

/// <summary>
/// Classe Raquette : Classe permettant de gérer une brique, sa position, sa taille, sa texture/sprite ainsi que sa visibilité
/// </summary>
class Brique
{
#pragma region Attributes
	public:
		/// <summary>
		/// Largeur de la brique
		/// </summary>
		int larg_BR = 128;

		/// <summary>
		/// Hauteur de la brique
		/// </summary>
		int haut_BR = 46;

		/// <summary>
		/// Position x de la brique
		/// </summary>
		int pos_x;

		/// <summary>
		/// Position y de la brique
		/// </summary>
		int pos_y;

		/// <summary>
		/// Défini si la brique est visible ou non
		/// </summary>
		bool visible;

		/// <summary>
		/// Texture de la brique
		/// </summary>
		sf::Texture text_brique;

		/// <summary>
		/// Sprite de la brique
		/// </summary>
		sf::Sprite sprite_brique;
#pragma endregion

#pragma region Methods
		/// <summary>
		/// Applique le sprite sur la brique
		/// </summary>
		void applique_sprite();

		/// <summary>
		/// Application du redimensionnement de l'échelle des briques à x1.5
		/// </summary>
		void applique_scale();
#pragma endregion

#pragma region Constructors
		/// <summary>
		/// Instancie une brique en position x et y donnés en paramètres
		/// </summary>
		/// <param name="pos_x2"> Position x voulue </param>
		/// <param name="pos_y2">Position y voulue </param>
		Brique(int pos_x2, int pos_y2);

		/// <summary>
		/// Instancie une Brique
		/// </summary>
		Brique();
#pragma endregion
};

