/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-myrpg-guillaume.lemoine
** File description:
** inventaire
*/

#include "include/my.h"

void inventaire_e(all_t *all)
{
    sfRenderWindow_drawSprite(all->window,
    all->game->inventory->sprite, NULL);
    sfRenderWindow_drawSprite(all->window,
    all->game->inventory->item1, NULL);
    sfRenderWindow_drawSprite(all->window,
    all->game->inventory->item2, NULL);
    sfRenderWindow_drawSprite(all->window,
    all->game->inventory->item3, NULL);
}
