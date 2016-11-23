// Réponse aux questions dans le fichier Questions.txt

#include <iostream>
#include <string>
#include "cadre.h"

using namespace std;

int main()
{
	cadre cadre1;
	cadre cadre2(10, 5, 10, 5, '*');
	int nLong = 10;
	int nLarg = 5;
	char nMotif = 'Z';
	cadre1.setLongeur(nLong);
	cadre1.setLargeur(nLarg);
	cadre1.setMotif(nMotif);
	cadre1.showCaraCadre();	
	cout << "Surface : " << cadre1.calcuSurface() << endl;
	cout << "Perimetre : " << cadre1.calcuPeri() << endl;
	cadre1.isCarre();
	cout << endl;
	cout << "Quelle est la nouvelle largeur ?" << endl;
	cin >> nLarg;
	cadre1.setLargeur(nLarg);
	cout << "Quelle est la nouvelle longeur ?" << endl;
	cin >> nLong;
	cadre1.setLongeur(nLong);
	cout << "Quel est le nouveau motif ?" << endl;
	cin >> nMotif;
	cadre1.setMotif(nMotif);
	cadre1.showCaraCadre();
	cout << endl;
	cadre2.showCaraCadre();
	system("pause");
}

