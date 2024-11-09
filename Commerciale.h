#pragma once
#include "Employe.h"
class Commerciale : virtual public Employe
{
private:
	double commission;
	int total_vente;
public:
	Commerciale(std::string nom, std::string prenom, double taux_horaire, int nb_heure, double commission,int total_vente);
	double calcule_indemnite() const;
	virtual void calculer_salaire() override;
	~Commerciale();
};

