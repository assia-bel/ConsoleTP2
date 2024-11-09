#pragma once
#include"Commerciale.h"
#include"Gestionnaire.h"


class GestCom :  public Gestionnaire,  public Commerciale
{

public:
	GestCom(std::string nom, std::string prenom, double taux_horaire, 
		int nb_heure, double salaire_heb, double commission, int total_vente);
	void calculer_salaire() override;
	~GestCom();

};

