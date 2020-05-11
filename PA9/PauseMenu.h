#ifndef PAUSEMENU_H
#define PAUSEMENU_H

#define _CRT_SECURE_NO_WARNINGS
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include <Windows.h>
#include <cstring>
#include "Displayer.h"


class PauseMenu
{
private:

public:

	PauseMenu(sf::RenderWindow &window);

	virtual ~PauseMenu();
};

#endif
