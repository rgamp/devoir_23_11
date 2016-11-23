#pragma once
class cadre
{
private:
	char motif;
	int longeur;
	int largeur;
	int ancrage_x = 0;
	int ancrage_y = 0;
public:
	cadre();
	cadre(int, int, int, int, char);
	void setLongeur(int newLong);
	void setLargeur(int newLarg);
	void setMotif(char newMotif);
	int getLongeur();
	int getLargeur();
	char getMotif();
	void showCaraCadre();
	int calcuSurface();
	int calcuPeri();
	bool isCarre();


	~cadre();
};

