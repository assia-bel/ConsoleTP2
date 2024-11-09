#include "Gestionnaire.h"
#include<iostream>

Gestionnaire::Gestionnaire(std::string nom, std::string prenom, double taux_horaire, int nb_heure, double salaire_heb)
 :Employe(nom, prenom, taux_horaire, nb_heure),salaire_heb(salaire_heb)
{}

void Gestionnaire::calculer_salaire() 
{
    Employe::calculer_salaire();
    *this+= (this->salaire_heb*4);
}

Gestionnaire::~Gestionnaire()
{}
