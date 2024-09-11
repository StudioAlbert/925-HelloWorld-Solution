// 925-HeadsOrTails.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool continueMessage()
{
	char reponse;
	
	std::cout << "Voulez vous continuer [o/n] ?\n";
	std::cin >> reponse;

	//return reponse != 'n';

	if(reponse != 'n')
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{

	char reponse;
	char tirage;

	std::srand(std::time(nullptr));

	for(int i = 0; i < 5; i++)
	{
		if(i == 2)
		{
			continue;
		}
		std::cout << "Counter i = " << i << std::endl;
	}


	do
	{
		// 1 : On demande au joueur un choix Pile ou Face
		std::cout << "Bienvenue au jeu de dés à 6 face" << '\n';
		std::cout << "Pile [P/p] ou Face [F/f] ?????" << '\n';

		// 2 : Stockage de la réponse
		std::cin >> reponse;

		switch (reponse)
		{
		case 'p':
			std::cout << "tu as tapé p\n";
		case 'P':
			std::cout << "tu as joue PILE\n";
			reponse = 'P';
			break;

		case 'f':
		case 'F':
			std::cout << "tu as joue FACE\n";
			reponse = 'F';
			break;

		default:
			std::cout << "Tricheur...................." << '\n';
			break;

		}

		// 3 : Tirage de la pièce
		if (std::rand() % 2 == 0)
		{
			// Rand renvoie un numero pair => PILE
			tirage = 'P';
		}
		else
		{
			// Rand renvoie un numero impair => FACE
			tirage = 'F';
		}
		std::cout << "La pièce a donnee " << tirage << '\n';

		// 4 : Comparaison Piece , Réponse
		if (tirage == reponse)
		{
			std::cout << "GAGNE :)\n";
		}
		else
		{
			std::cout << "PERDU :(\n";
		}


	} while (continueMessage());

	std::cout << "Au revoir" << std::endl;

	return EXIT_SUCCESS;

}

