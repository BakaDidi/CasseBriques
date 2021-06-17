#include "Balle.h"
#include <iostream>

Balle::Balle()
{
    if (!text_balle.loadFromFile("balle.png"))
    {
        std::cout << "Erreur de chargement du sprite de la raquette" << std::endl;
    }

    balle.setTexture(text_balle);
    balle.scale(1.5f, 1.5f);
}

void Balle::deplacement_balle()
{
    if (dir == 1) /// Direction diagonale bas droite
    {
        pos_x_b += vitesse_balle;
        pos_y_b += vitesse_balle;
    }

    if (dir == 2) /// Direction diagonale bas gauche
    {
        pos_x_b -= vitesse_balle;
        pos_y_b += vitesse_balle;
    }

    if (dir == 3) /// Direction diagonale haut droit
    {
        pos_x_b += vitesse_balle;
        pos_y_b -= vitesse_balle;
    }

    if (dir == 4) /// Direction diagonale haut gauche
    {
        pos_x_b -= vitesse_balle;
        pos_y_b -= vitesse_balle;
    }
}

void Balle::rebondir_M(int xmax, int xmin, int ymin, int ymax)
{
    if (dir == 1)
    {
        if (pos_x_b >= xmax)
        {
            dir = 2;
        }
    }

    if (dir == 2)
    {
        if (pos_x_b <= xmin)
        {
            dir = 1;
        }
    }

    if (dir == 3)
    {
        if (pos_x_b >= xmax)
        {
            dir = 4;
        }
        if (pos_y_b <= ymin)
        {
            dir = 1;
        }
    }

    if (dir == 4)
    {
        if (pos_x_b <= xmin)
        {
            dir = 3;
        }
        if (pos_y_b <= ymin)
        {
            dir = 2;
        }
    }
}

void Balle::rebondir_R(int pos_x_r, int pos_y_r, int larg_R, int haut_R)
{
    if (((pos_x_r <= pos_x_b) && (pos_x_b <= (pos_x_r + larg_R)) && (pos_y_r <= (pos_y_b + haut_b)) && ((pos_y_b + haut_b) <= (pos_y_r + haut_R))))
    {
        if (dir == 2)
        {
            dir = 4;
        }
        else if (dir == 1)
        {
            dir = 3;
        }
    }
}

void Balle::rebondir_BR(Brique tab_Briques[], int nb_briques, int& nb_briques_restantes)
{
    for (int i = 0; i < nb_briques; i++)
    {
        if ((((tab_Briques[i].pos_x <= pos_x_b) && (pos_x_b <= (tab_Briques[i].pos_x + tab_Briques[i].larg_BR)) && (tab_Briques[i].pos_y <= (pos_y_b + haut_b)) && ((pos_y_b + haut_b) <= (tab_Briques[i].pos_y + tab_Briques[i].haut_BR)))) && tab_Briques[i].visible)
        {
            if (dir == 1)
            {
                dir = 2;
            }

            if (dir == 2)
            {
                dir = 1;
            }

            if (dir == 3)
            {
                dir = 1;
            }

            if (dir == 4)
            {
                dir = 2;
            }
            tab_Briques[i].visible = false;
            nb_briques_restantes--;
        }
    }
}