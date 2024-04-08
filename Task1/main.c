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

    move->beg = //coordonnées de départ;
    move->end = //coordonnes d'arrivée;
    move->dep = //vecteur deplacement;
    move->speed = //vitesse de deplacement;
    move->delay = //delai avant le debut du deplacement;
    move->norm = //utilisez pythagore;
    move->time = 0.0; //mettre a 0 au debut
    move->total_time = // si d = v * t alors t = ...
    return move;
}

general_t *init_gen(void) //initailisation de nos paramètres graphiques 
{
    general_t *gen = malloc(sizeof(general_t));

    gen->mode.height = 1080;
    gen->mode.width = 1920;
    gen->mode.bitsPerPixel = 32; 
    gen->window = //creez la window
    gen->texture = //creez la texture;
    gen->sprite = //creez le sprite
    sfSprite_setTexture(gen->sprite, gen->texture, sfTrue); //pour set la texture dans le sprite
    gen->clock = //creez la clock;
    return gen;
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