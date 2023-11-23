#include "pch.h"
using namespace std;


Objet2D::Objet2D() {
	this->dim1 = 1;
	this->dim2 = 1;
}

Objet2D::Objet2D(int tdim1, int tdim2) {
	this->dim1 = tdim1;
	this->dim2 = tdim2;
}

void Objet2D::setSuivant(Objet2D* suiv) {
	this->Suivant = suiv;
}

Objet2D* Objet2D::getSuivant() {
	return this->Suivant;
}

Rectangle::Rectangle() {
	this->dim1 = 1;
	this->dim2 = 1;
}

Rectangle::Rectangle(int tdim1, int tdim2) {
	this->dim1 = tdim1;
	this->dim2 = tdim2;
}

int Rectangle::getLargeur() {
	return this->dim1;
}

int Rectangle::getLongueur() {
	return this->dim2;
}

int Rectangle::getPerimetre() {
	return this->getLargeur() * 2 + this->getLongueur() * 2;
}

int Rectangle::getAire() {
	return this->getLargeur() * this->getLongueur();
}

string Rectangle::afficheInfo() {
	string info = "Je suis un rectangle";
	return info;
}

Carre::Carre() {
	this->dim1 = 1;
	this->dim2 = 1;
}

Carre::Carre(int tcote) {
	this->dim1 = tcote;
	this->dim2 = tcote;
}

int Carre::getCote() {
	return dim1;
}

int Carre::getPerimetre() {
	return this->getCote() * 4;
}

int Carre::getAire() {
	return this->getCote() * this->getCote();
}

string Carre::afficheInfo() {
	string info = "Je suis un carré";
	return info;
}