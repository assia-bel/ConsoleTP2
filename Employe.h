#pragma once
#include<string>
#include "Salarie.h"
class Employe : private Salarie
{
private:
	std::string nom;
	std::string prenom;
	double taux_horaire;
	int nb_heure;
	double salaire;

public:
	Employe(std::string,std::string,double,int);
	void afficher() const;
	virtual void calculer_salaire() override;

	//surcharge de l'operateur + pour calculer le totale des salaires
	double operator + (double) const;
	//surcharge de l'operateur += pour calculer le salaire dans les classes filles
	void operator +=(double);
	//La présence d'un destructeur virtuel dans Employe ici fait en sorte que 
	// l'opération delete e ,( avec e declaré comme un pointeur vers Employe )
	//invoque le destructeur de l'objet réellement pointé par e, peu importe son type (Commercial, Gestionnaire , GestCom).
	virtual ~Employe();

};

