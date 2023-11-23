#pragma once
#include "pch.h"

class Stockage2 {
private:
    Objet2D* queue;
    Objet2D* tete;
public:
    Stockage2();
    void ajouterAtHead(Objet2D* nouvelObjet);
    void ajouterAtTail(Objet2D* nouvelObjet);
    void ajouterAtIndex(Objet2D* nouvelObjet, int index);
    void supprAtHead();
    void supprAtTail();
    void supprAtIndex(int index);
    void afficherInfos();
    ~Stockage2();
};