#include "Offre.h"


using namespace std;


// M�thode qui permet d'attribuer le nom de la compagnie qui fournit une offre.
void Offre::attribuerNomCompagnie(string nom) {
	this->m_nom = nom;
}


// M�thode qui permet de modifier la capacit� disponible pour une offre.
void Offre::attriberCapacit�(int placesRestantes) {
	this->placesDisponibles = placesRestantes;
}


// M�thode qui permet d'assigner un objet prix � une offre.
void Offre::attribuerPrix(float montant, string devise) {
	this->prix = new Prix(montant, devise);
}