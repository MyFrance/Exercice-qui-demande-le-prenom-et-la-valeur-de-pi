#include <iostream>
#include <string>
using namespace std;

int main()

{
	// Programme qui afficher le prenom et pi
	// Prenom
	cout << "Quel est votre prenom" << endl; // affiche le message sur l'écran
	string prenomUtilisateur("rentre un prenom"); //on réserve la mémoire pour stocker un string
	cin >> prenomUtilisateur; // on demande à l'utilisateur de rentrer son prénom

	// Pi
	cout << "Quelle est la valeur de pi ?" << endl;
	double valeurPi;
	cin >> valeurPi;

	// On affiche tout 

	cout << " Je m'appelle " << prenomUtilisateur << ", pi vaut " << valeurPi << endl;

	return 0; 

}
