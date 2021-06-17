#include "Brique.h"
#pragma once

/// <summary>
/// Nombre de briques totales
/// </summary>
const int nb_briques = 60;

/// <summary>
/// Classe Jeu : Classe permettant de gérer toutes les méthodes liées aux briques et au jeu en général
/// </summary>
class Jeu
{
#pragma region Attributes
public :
	/// <summary>
	/// Nombre de briques restantes à l'écran
	/// </summary>
	int nb_briques_restantes = nb_briques;

	/// <summary>
	/// Taille maximale en x de la fenêtre
	/// </summary>
	int xmax = 1257;

	/// <summary>
	/// Taille maximale en y de la fenêtre
	/// </summary>
	int ymax = 720;

	/// <summary>
	/// Taille minimale en x de la fenêtre
	/// </summary>
	int xmin = 0;

	/// <summary>
	/// Taille minimale en y de la fenêtre
	/// </summary>
	int ymin = 0;

	/// <summary>
	/// Compteur pour naviguer dans le tableau de briques
	/// </summary>
	int compteur_tab = 0;

	/// <summary>
	/// Tableau de briques de taille nb_briques (60)
	/// </summary>
	Brique tab_Briques[nb_briques];
#pragma endregion
	
#pragma region Methods
	/// <summary>
	/// Remplissage tableau briques
	/// </summary>
	void remplir_tab_briques();

	/// <summary>
	/// Affichage du tableau briques
	/// </summary>
	/// <param name="window"> La fenêtre de rendu </param>
	void Affichage_tab_briques(sf::RenderWindow &window);

	/// <summary>
	/// Redimensionnement de l'échelle des briques à x1.5
	/// </summary>
	void Scale_tab_briques();
#pragma endregion

#pragma region Constructors
	/// <summary>
	/// Constructeur de la classe Jeu
	/// </summary>
	Jeu();
#pragma endregion
};



