#include <SFML/Graphics.hpp>
#include <iostream>
#include "GameLoop.hpp"
#include "DEFINITIONS.hpp"

int main()
{
	Bardo::GameLoop(SCREEN_WIDTH, SCREEN_HEIGHT, "Super Bardo Game");

	return EXIT_SUCCESS;
}