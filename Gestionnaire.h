#pragma once
#include "Employe.h"
class Gestionnaire : virtual public Employe
{
private:
	double salaire_heb;
	
public:
	Gestionnaire(std::string nom, std::string prenom, double taux_horaire, int nb_heure, double salaire_heb);
	virtual void calculer_salaire() override;
	
	~Gestionnaire();
};

