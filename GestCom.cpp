#include "GestCom.h"

GestCom::GestCom(std::string nom, std::string prenom, double taux_horaire,
	int nb_heure, double salaire_heb, double commission, int total_vente)
	:Employe(nom, prenom, taux_horaire, nb_heure),
	Gestionnaire(nom,prenom,taux_horaire,nb_heure,salaire_heb),
	Commerciale(nom, prenom, taux_horaire, nb_heure, commission, total_vente)
{}

void GestCom::calculer_salaire()
{
	Gestionnaire::calculer_salaire();
	*this+= calcule_indemnite();
}


GestCom::~GestCom()
{}
