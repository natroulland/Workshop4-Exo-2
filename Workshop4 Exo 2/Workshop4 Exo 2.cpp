#include "pch.h"

using namespace System;

int main() {
	Stockage2 stockage;

	// Cr�ation d'objets Rectangle et Carr�
	Objet2D* rect = new Rectangle();
	Objet2D* cube = new Carre();
	Objet2D* c = new Carre();
	Objet2D* r = new Rectangle();

	// Ajout des objets au stockage
	stockage.ajouterAtHead(rect);
	stockage.ajouterAtTail(cube);
	stockage.ajouterAtTail(c);
	stockage.ajouterAtIndex(r, 2);

	// Affichage des informations de tous les objets stock�s
	stockage.afficherInfos();
	cout << " " << endl;

	//Supression d'un �l�ment en index 2
	stockage.supprAtIndex(2);

	// Affichage des informations des objets restants
	stockage.afficherInfos();
	cout << "" << endl;

	// Supression des �l�ment en t�te et en queue
	stockage.supprAtHead();
	stockage.supprAtTail();

	stockage.afficherInfos();

	// Nettoyage de la m�moire (appel automatique du destructeur)
	return 0;
}