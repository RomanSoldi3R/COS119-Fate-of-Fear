#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Character.h"
#include "Knight.h"
#include "Sorcerer.h"
#include "Art.h"


int main()
{
	srand(time(NULL));
	
	Art::TitleArt();
	std::cin.ignore();

	

}


// see the Title Screen - press enter to continue/ esc to exit
// choose hero: Knight/Sorcerer
// turn based style combat

