// 925-HeadsOrTails.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	char reponse;
	char tirage;

	std::srand(std::time(nullptr));

	// 1 : On demande au joueur un choix Pile ou Face
	std::cout << "Bienvenue au jeu de dés à 6 face" << '\n';
	std::cout << "Pile [P/p] ou Face [F/f] ?????" << '\n';

	// 2 : Stockage de la réponse
	std::cin >> reponse;

	if (reponse == 'P' || reponse == 'p')
	{
		std::cout << "tu as joue PILE\n";
		reponse = 'P';
	}
	else if (reponse == 'F' || reponse == 'f')
	{
		std::cout << "tu as joue FACE\n";
		reponse = 'F';
	}
	else
	{
		std::cout << "Tricheur...................." << '\n';
		return EXIT_FAILURE;
	}

	// 3 : Tirage de la pièce
	if (std::rand() % 2 == 0)
	{
		// Rand renvoie un numero pair => PILE
		tirage = 'P';
	}else
	{
		// Rand renvoie un numero impair => FACE
		tirage = 'F';
	}
	std::cout << "La pièce a donnee " << tirage << '\n';

	// 4 : Comparaison Piece , Réponse
	if(tirage == reponse)
	{
		std::cout << "GAGNE :)\n";
	}else
	{
		std::cout << "PERDU :(\n";
	}

	return EXIT_SUCCESS;

}

