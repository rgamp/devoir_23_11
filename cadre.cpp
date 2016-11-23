#include "cadre.h"
#include <iostream>
#include <string>

using namespace std;



cadre::cadre()
{
}

cadre::cadre(int ancrage_X, int ancrage_Y, int longeur_, int largeur_, char motif_)
{
	ancrage_x = ancrage_X;
	ancrage_y = ancrage_Y;
	longeur = longeur_;
	largeur = largeur_;
	motif = motif_;
}

void cadre::setLongeur(int newLong)
{
	longeur = newLong;
}

void cadre::setLargeur(int newLarg)
{
	largeur = newLarg;
}

void cadre::setMotif(char newMotif)
{
	motif = newMotif;
}

int cadre::getLongeur()
{
	return longeur;
}

int cadre::getLargeur()
{
	return largeur;
}

char cadre::getMotif()
{
	return motif;
}

void cadre::showCaraCadre()
{
	cout << "Ancrage x : " << ancrage_x << endl;
	cout << "Ancrage y : " << ancrage_y << endl;
	cout << "Longeur : " << longeur << endl;
	cout << "Largeur : " << largeur << endl;
	cout << "Motif : " << motif << endl;
}

int cadre::calcuSurface()
{
	return longeur * largeur;
}

int cadre::calcuPeri()
{
	return (longeur + largeur) * 2;
}

bool cadre::isCarre()
{
	if (longeur == largeur)
	{
		cout << "C'est un carre !" << endl;
		return true;
	}
	else
	{
		cout << "C'est un rectangle !" << endl;
		return false;
	}
}


cadre::~cadre()
{
}
