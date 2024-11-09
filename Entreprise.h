#pragma once
#include<string>
#include "Employe.h"
class Entreprise
{
private:
	std::string nom;
	Employe** list;
	int capacity;
	int nb_employe;
public:
	Entreprise(std::string);
	void afficherEmployes() const;
	void calculer_totale_salaire() const;
	void ajouter_employe(Employe*);
	void resize();
	~Entreprise();

};

