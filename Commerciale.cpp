#include "Commerciale.h"
#include<iostream>

Commerciale::Commerciale(std::string nom, std::string prenom, double taux_horaire, int nb_heure, double commission, int total_vente)
	:Employe(nom,prenom,taux_horaire,nb_heure),commission(commission),total_vente(total_vente)
{}



double Commerciale::calcule_indemnite() const
{
	return this->commission*this->total_vente;
}

void Commerciale::calculer_salaire()
{
	Employe::calculer_salaire();
	*this+=this->calcule_indemnite();
}

Commerciale::~Commerciale()
{}
