# include <SFML/Graphics.hpp>
# include "Brique.h"
#pragma once

/// <summary>
/// Classe Balle : Classe permettant de gérer la balle (son déplacement, les collisions et son apparence)
/// </summary>
class Balle
{
#pragma region Attributes
public:
    /// <summary>
    /// Largeur de la balle
    /// </summary>
    int larg_b = 16;

    /// <summary>
    /// Hauteur de la balle
    /// </summary>
    int haut_b = 17;

    /// <summary>
    /// Position x de la balle
    /// </summary>
    int pos_x_b = 400;

    /// <summary>
    /// Position y de la balle
    /// </summary>
    int pos_y_b = 654;

    /// <summary>
    /// Direction de la balle
    /// </summary>
    int dir = 3;

    /// <summary>
    /// Vitesse de la balle
    /// </summary>
    int vitesse_balle = 20;

    /// <summary>
    /// Texture de la balle
    /// </summary>
    sf::Texture text_balle;

    /// <summary>
    /// Sprite de la balle
    /// </summary>
    sf::Sprite balle;
#pragma endregion
#pragma region Methods
    /// <summary>
    /// Methode de deplacement de la balle
    /// </summary>
    void deplacement_balle();

    /// <summary>
    /// Methode pour rebondir sur les murs
    /// </summary>
    /// <param name="xmax"> Taille maximale en x de la fenêtre </param>
    /// <param name="xmin"> Taille minimale en x de la fenêtre </param>
    /// <param name="ymin"> Taille minimale en y de la fenêtre </param>
    /// <param name="ymax"> Taille maximale en y de la fenêtre </param>
    void rebondir_M(int xmax, int xmin, int ymin, int ymax);

    /// <summary>
    /// Methode pour rebondir sur la raquette
    /// </summary>
    /// <param name="pos_x_r"> Position en x de la raquette </param>
    /// <param name="pos_y_r"> Position en y de la raquette </param>
    /// <param name="larg_R"> Largeur de la raquette </param>
    /// <param name="haut_R"> Hauteur de la raquette </param>
    void rebondir_R(int pos_x_r, int pos_y_r, int larg_R, int haut_R);

    /// <summary>
    /// Methode pour rebondir sur les briques
    /// </summary>
    /// <param name="tab_Briques"> Tableau de briques de taille nb_briques (60) </param>
    /// <param name="nb_briques"> Nombre de briques totales </param>
    /// <param name="nb_briques_restantes"> Nombre de briques restantes à l'écran </param>
    void rebondir_BR(Brique tab_Briques[], int nb_briques, int& nb_briques_restantes);
#pragma endregion
#pragma region Constructor
    Balle();
#pragma endregion
};

