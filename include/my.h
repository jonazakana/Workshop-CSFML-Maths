/*
** EPITECH PROJECT, 2024
** Workshop-CSFML-Maths
** File description:
** my
*/

#pragma once

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <math.h>

typedef struct general_s {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfSprite *sprite;
    sfTexture *texture;
    sfClock *clock;
    sfEvent event;
} general_t;

