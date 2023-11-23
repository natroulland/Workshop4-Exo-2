#pragma once
#include "pch.h"
using namespace std;


class Objet2D {
private:
	Objet2D* Suivant;
protected:
	int dim1;
	int dim2;
public:
	Objet2D();
	Objet2D(int tdim1, int tdim2);
	Objet2D* getSuivant();
	void setSuivant(Objet2D* suivant);
	virtual int getPerimetre() = 0;
	virtual int getAire() = 0;
	virtual string afficheInfo() = 0;
};

class Rectangle : public Objet2D {
public:
	Rectangle();
	Rectangle(int tdim1, int tdim2);
	int getLongueur();
	int getLargeur();
	virtual int getPerimetre();
	virtual int getAire();
	string afficheInfo() override;
};

class Carre : public Rectangle {
public:
	Carre();
	Carre(int tcote);
	int getCote();
	int getPerimetre();
	int getAire();
	string afficheInfo() override;
};
