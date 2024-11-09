#include "Entreprise.h"
#include<iostream>
Entreprise::Entreprise(std::string nom)
:nom(nom), capacity(10),nb_employe(0)
{
	this->list = new Employe*[this->capacity];
	for (int i = 0; i < this->capacity; i++)
	{
		this->list[i] = nullptr;
	}
}

void Entreprise::afficherEmployes() const
{
	std::cout << "*********Liste des employes***********" << std::endl;
	for (int i = 0; i < this->nb_employe; i++)
	{
		if (this->list[i] != nullptr)
		{
			this->list[i]->afficher();
		}
	}
}

void Entreprise::ajouter_employe(Employe* employe)
{
	if (this->nb_employe == this->capacity)
	{
		this->resize();  // Redimensionner le tableau si necessaire
	}
	//l'ajout de l'employe
	this->list[this->nb_employe++] = employe;
}


void Entreprise::resize()
{
	this->capacity *= 2;
	Employe** newtable = new Employe * [this->capacity];

	// Copier les employes existants dans le nouveau tableau
	for (int i = 0; i < this->nb_employe; i++)
	{
		newtable[i] = this->list[i];
	}
	//initialiser les elements restant avec nullptr
	for (int i = this->nb_employe; i < this->capacity; i++)
	{
		newtable[i] = nullptr;
	}

	// Liberer l'ancien tableau et assigner le nouveau
	delete[] this->list;
	this->list = newtable;
}

void Entreprise::calculer_totale_salaire() const
{
	double totale = 0.0;
	for (int i = 0; i < this->nb_employe; i++)
	{
		if (this->list[i] != nullptr)
		{
			totale = *this->list[i]+totale;
		}
	}
	std::cout << "Totale des salaire est : " << totale;

}

Entreprise::~Entreprise()
{
	delete[] this->list;
}
