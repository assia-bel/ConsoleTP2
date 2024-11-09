// ConsoleTP2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Employe.h"
#include "Commerciale.h"
#include "Gestionnaire.h"
#include "GestCom.h"
#include "Entreprise.h"


int main()
{
	Employe* e, *e1 ,*e2;
	//nom,prenom, taux horaire , nb heure ,commission , total vente
	e = new Commerciale("a","a",12.0,30,5.0,12);
	//nom,prenom, taux horaire , nb heure ,commission , total vente ,salaire heb
	e1 = new Gestionnaire("b", "b", 14.0, 50, 10.0);
	//nom,prenom, taux horaire , nb heure ,commission , total vente ,salaire heb, commission , total vente
	e2 = new GestCom("c", "c", 14.0, 40 , 12.0, 5.0,12); 

	e->calculer_salaire();
	e1->calculer_salaire();
	e2->calculer_salaire();
	e->afficher();
	e1->afficher();
	e2->afficher();

	
	Entreprise* abc = new Entreprise("abc");
	abc->ajouter_employe(e);
	abc->ajouter_employe(e1);
	abc->ajouter_employe(e2);
	abc->afficherEmployes();
	abc->calculer_totale_salaire();
	
	delete e, e1, e2,abc ;
}
