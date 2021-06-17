#include "Jeu.h"
#include "Brique.h"

Jeu::Jeu()
{

}

void Jeu::remplir_tab_briques()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++, compteur_tab++)
        {
            tab_Briques[compteur_tab] = Brique(39 + (j * 100), (i * 24) + 1);
        }
    }
}

void Jeu::Affichage_tab_briques(sf::RenderWindow &window)
{
    for (int i = 0; i < nb_briques; i++)
    {
        tab_Briques[i].applique_sprite();
        tab_Briques[i].sprite_brique.setPosition(tab_Briques[i].pos_x, tab_Briques[i].pos_y);
        if (tab_Briques[i].visible == true)
        {
            window.draw(tab_Briques[i].sprite_brique);
        }
    }
}

void Jeu::Scale_tab_briques()
{
    for (int i = 0; i < nb_briques; i++)
    {
        tab_Briques[i].applique_scale();
    }
}