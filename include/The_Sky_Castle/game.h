#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>

#include "character.h"

/* Do a pause inthe terminal */
void pause_console(void);

/* Create the main character */
Character *set_main_character();

/* Display the title of the game */
void title(std::ifstream &file);

#endif // GAME_H
