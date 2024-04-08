/*
** EPITECH PROJECT, 2024
** Workshop-CSFML-Maths
** File description:
** main
*/

#include "my.h"

deplacement_t *init(void) //initialisation de la structure
{
    deplacement_t *move = malloc(sizeof(deplacement_t));

    //initialiser la structure dep
}

static void orientation(sfRectangleShape *rect, sfVector2f plane_traj)
{
    //orientez le sprite dans la direction de son deplacement
}

general_t *init_gen(void) //initailisation de nos paramètres graphiques 
{
    general_t *gen = malloc(sizeof(general_t));

    //initialisez la structure général
}

void deplacement(float delta, general_t *gen, deplacement_t *dep)
{
    sfVector2f live_pos = //position actuel du sprite;

    live_pos = //prenez la position actuelle du sprite;
    dep->time += //additionnez a chaque fois le temps qu'il s'est écoulé depuis la dernière boucle 
    //condition pour actualiser la position 
        //calcul d'actualisation de la position
    
    //update de la position sur le sprite
}

void loop(general_t *gen, deplacement_t *dep) //loop principale
{
    float delta = 0.0; //pour la clock

    //faites une loop basique (oubliez pas de restart la clock !!)
    
}

int main()
{
    general_t *gen = init_gen();
    deplacement_t *dep = init();
    loop(gen, dep);
}