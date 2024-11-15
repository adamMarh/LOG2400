#pragma once
#include <string>

#include "Prix.h"

using namespace std;

class Offre {

public:
	Offre();
	~Offre();

	void attribuerPrix(float montant, string devise);
	void attriberCapacité(int placesRestantes);
	void attribuerNomCompagnie(string nom);

private:
	Prix* prix;
	int placesDisponibles;
	string m_nom = "";

};
