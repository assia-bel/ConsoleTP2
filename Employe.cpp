#include "Employe.h"
#include<iostream>

Employe::Employe(std::string n, std::string p, double t, int nb)
	: nom(n),prenom(p),taux_horaire(t),nb_heure(nb),salaire(0)
{}

void Employe::afficher() const
{
	std::cout << "Info Employe---" << std::endl;
	std::cout << "Nom :" <<this->nom <<std::endl;
	std::cout << "Prenom :" << this->prenom<<std::endl;
	std::cout << "Salaire : " << this->salaire << std::endl;
	
}

void Employe::calculer_salaire()
{
	this->salaire = this->nb_heure * this->taux_horaire;
}
double Employe::operator+(double d) const
{
	return this->salaire+d;
}
void Employe::operator+=(double d)
{
	this->salaire += d;
}

Employe::~Employe()
{}



