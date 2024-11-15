#include "Prix.h"
#include <iostream>

using namespace std;

// Initialisation de l'attribut statique
float Prix::euroACad = 1.48f;

// Constructeur avec paramètres
Prix::Prix(float montant, const string& devise) : montant(montant), devise(devise) {
    cout << "Le prix est de : " << this->montant << " " << this->devise << endl;
}

// Constructeur par défaut
Prix::Prix() {
    cout << "Prix par défaut initialisé : " << this->montant << " " << this->devise << endl;
}

// Méthode pour définir le taux EUR -> CAD
void Prix::definirTauxEuroACad(float taux) {
    euroACad = taux;
}

// Méthode pour convertir en CAD
float Prix::convertirEnCAD() const {
    if (devise == "EUR") {
        return montant * euroACad;
    }
    return montant;
}
