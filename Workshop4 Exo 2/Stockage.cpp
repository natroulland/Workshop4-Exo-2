#include "pch.h"

Stockage2::Stockage2() : tete(nullptr), queue(nullptr) {}

void Stockage2::ajouterAtHead(Objet2D* nouvelObjet) {
    if (tete != nullptr) {
        nouvelObjet->setSuivant(tete);
    }
    tete = nouvelObjet;
    if (queue == nullptr) {
        queue = tete;
    }
}

void Stockage2::ajouterAtIndex(Objet2D* nouvelObjet, int index) {
    int place = 1;
    if (index == 0) {
        this->ajouterAtHead(nouvelObjet);
    }
    else {
        Objet2D* suiv = tete;
        while (place < index) {
            suiv = suiv->getSuivant();
            place++;
        }
        Objet2D* suivant = suiv->getSuivant();
        suiv->setSuivant(nouvelObjet);
        nouvelObjet->setSuivant(suivant);
    }
}

void Stockage2::ajouterAtTail(Objet2D* nouvelObjet) {
    queue->setSuivant(nouvelObjet);
    queue = nouvelObjet;
    if (tete == nullptr) {
        tete = queue;
    }
    queue->setSuivant(nullptr);
}

void Stockage2::supprAtHead() {
    Objet2D* tetesuiv = tete->getSuivant();
    delete tete;
    tete = tetesuiv;
}

void Stockage2::supprAtIndex(int index) {
    if (index == 0) {
        // Supprimer le premier �l�ment de la liste
        Objet2D* courant = tete;
        tete = tete->getSuivant();
        delete courant;
        return;
    }

    Objet2D* precedent = nullptr;
    Objet2D* courant = tete;
    int currentIndex = 0;

    // Parcours de la liste jusqu'� l'�l�ment pr�c�dant l'index sp�cifi�
    while (courant != nullptr && currentIndex != index) {
        precedent = courant;
        courant = courant->getSuivant();
        currentIndex++;
    }

    // Si l'index sp�cifi� est valide, supprimer l'�l�ment
    if (courant != nullptr) {
        precedent->setSuivant(courant->getSuivant());
        delete courant;
    }
    else {
        std::cout << "L'index sp�cifi� n'existe pas dans la liste." << std::endl;
    }
}

void Stockage2::supprAtTail() {
    if (!tete->getSuivant()) {
        // Il n'y a qu'un seul �l�ment dans la liste
        delete tete;
        tete = nullptr;
        return;
    }

    Objet2D* courant = tete;
    Objet2D* avantDernier = nullptr;

    // Parcours de la liste jusqu'� l'avant-dernier n�ud
    while (courant->getSuivant() != nullptr) {
        avantDernier = courant;
        courant = courant->getSuivant();
    }

    // Lib�ration de la m�moire du dernier n�ud
    delete courant;

    // Mise � jour du lien du nouvel avant-dernier n�ud vers nullptr
    avantDernier->setSuivant(nullptr);
}


void Stockage2::afficherInfos() {
    cout << tete->afficheInfo() << endl;
    Objet2D* suiv = tete->getSuivant();
    while (suiv) {
        cout << suiv->afficheInfo() << endl;
        suiv = suiv->getSuivant();
    }
}

Stockage2::~Stockage2() {
    Objet2D* suiv = tete;
    while (suiv) {
        Objet2D* suivant = suiv->getSuivant();
        delete suiv;
        suiv = suivant;
    }
    tete = nullptr;
}