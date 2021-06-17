#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include "Brique.h"
#include "Balle.h"
#include "Raquette.h"
#include "Jeu.h"

using namespace std;

sf::RenderWindow window(sf::VideoMode(1280, 720), "Casse Briques");


int main()
{
    window.setFramerateLimit(60);   // Défini le nombre d'images par secondes à 60

    Balle balle_jeu = Balle();
    Raquette raquette = Raquette();
    Jeu jeu = Jeu();

    jeu.remplir_tab_briques();
    jeu.Scale_tab_briques();

    while (window.isOpen() && jeu.nb_briques_restantes != 0 && balle_jeu.pos_y_b <= jeu.ymax)   // Boucle de jeu
    {
        window.clear(); // Efface le contenu de la fenêtre

        balle_jeu.deplacement_balle();
        balle_jeu.rebondir_M(jeu.xmax, jeu.xmin, jeu.ymin, jeu.ymax);
        balle_jeu.rebondir_R(raquette.pos_x_r, raquette.pos_y_r, raquette.larg_R, raquette.haut_R);
        balle_jeu.rebondir_BR(jeu.tab_Briques, nb_briques, jeu.nb_briques_restantes);
        balle_jeu.balle.setPosition(balle_jeu.pos_x_b, balle_jeu.pos_y_b);
        raquette.raquette.setPosition(raquette.pos_x_r, raquette.pos_y_r);
        jeu.Affichage_tab_briques(window);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && raquette.pos_x_r > 0)
            raquette.pos_x_r -= raquette.vitesse_raquette;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && raquette.pos_x_r < 1152)
            raquette.pos_x_r += raquette.vitesse_raquette;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            break;

        window.draw(balle_jeu.balle);
        window.draw(raquette.raquette);
        window.display();
        Sleep(30);  // Permet de faire attendre le programme pendant 30 millisecondes avant de continuer à exécuter les instructions
    }

    if (jeu.nb_briques_restantes == 0)
        cout << "Vous avez gagne !";
    else
        cout << "Vous avez perdu !";


    return 0;
}