#pragma once
#include <string>

class Prix {
public:
    Prix(float montant, const std::string& devise);
    Prix();
    ~Prix() {} ;

    float convertirEnCAD() const;
    static void definirTauxEuroACad(float taux);

private:

    float montant = 0;
    std::string devise = "CAD";
    static float euroACad;
};