#include "Prix.h"
#include <iostream>

using namespace std;

// Initialisation de l'attribut statique
float Prix::euroACad = 1.48f;

// Constructeur avec param�tres
Prix::Prix(float montant, const string& devise) : montant(montant), devise(devise) {
    cout << "Le prix est de : " << this->montant << " " << this->devise << endl;
}

// Constructeur par d�faut
Prix::Prix() {
    cout << "Prix par d�faut initialis� : " << this->montant << " " << this->devise << endl;
}

// M�thode pour d�finir le taux EUR -> CAD
void Prix::definirTauxEuroACad(float taux) {
    euroACad = taux;
}

// M�thode pour convertir en CAD
float Prix::convertirEnCAD() const {
    if (devise == "EUR") {
        return montant * euroACad;
    }
    return montant;
}
