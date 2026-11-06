
#include <iostream>
#include "Vecteur2D.h"

using namespace std;

int main() {

    Vecteur2D v1(2, 3);
    Vecteur2D v2(4, 5);

    Vecteur2D v3 = v1 + v2;

    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    cout << "Resultat : ";
    v3.afficher();

    return 0;
}
