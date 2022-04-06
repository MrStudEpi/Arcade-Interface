# Arcade

## Properties (Features)
> Cette Section est rervervé aux differentes propriétés pré-enregistrer et qui peuvent etre utiliser dans le cadre d'envoie de donnée du jeu à la lib

**Norme** :
| Prefix | Library
|--      |--------
| S      | SFML / SDL
| N      | Ncurses
| D      | SDL
| x      | All (Used by everyone)

x = does'nt care
> Prefix: Beginning of a property name it's always Prefix followed by ':' -> S:example

**Existing Properties**

1. Global Properties
    * name [`string`] (Define name of the window and the game)
    * S:cell-size [`Vector`] (Define the common size of each cell)
    * S:map-size [`Vector`] (Define the size of map needed for a compatible window)
    * S:background [`Array<int>(3)`] (Take tree int that represent color at RGB for background)
    * N:background [`int`] (Take one int that represent color at RGB for background) (WIP)
2. Symbol Properties
    * S:rect_colored [`Array<int>(3)`] (Take tree int that represent color for the rectangle)
    * N:color [`int`] (Take color for Ncurses)
    * S:texture [`string`] (Take path of the texture file for symbol)
    * S:texture_rect [`Array<int>(4)`] (Take rect size for texture area to display)