#include <iostream>
#include <string>
using namespace std;

int main()

{
	// Programme qui afficher le prenom et pi
	// Prenom
	cout << "Quel est votre prenom" << endl; // affiche le message sur l'�cran
	string prenomUtilisateur("rentre un prenom"); //on r�serve la m�moire pour stocker un string
	cin >> prenomUtilisateur; // on demande � l'utilisateur de rentrer son pr�nom

	// Pi
	cout << "Quelle est la valeur de pi ?" << endl;
	double valeurPi;
	cin >> valeurPi;

	// On affiche tout 

	cout << " Je m'appelle " << prenomUtilisateur << ", pi vaut " << valeurPi << endl;

	return 0; 

}
