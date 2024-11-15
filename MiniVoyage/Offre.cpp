#include "Offre.h"


using namespace std;


// Méthode qui permet d'attribuer le nom de la compagnie qui fournit une offre.
void Offre::attribuerNomCompagnie(string nom) {
	this->m_nom = nom;
}


// Méthode qui permet de modifier la capacité disponible pour une offre.
void Offre::attriberCapacité(int placesRestantes) {
	this->placesDisponibles = placesRestantes;
}


// Méthode qui permet d'assigner un objet prix à une offre.
void Offre::attribuerPrix(float montant, string devise) {
	this->prix = new Prix(montant, devise);
}