
#include <iostream>
#include "Tableau.h"

using namespace std;

int main() {


    Tableau t(5);


    t[0] = 10;
    t[1] = 20;
    t[2] = 30;
    t[3] = 40;
    t[4] = 50;


    cout << "Contenu du tableau :" << endl;

    try {
        for (int i = 0; i < 5; i++) {
            cout << t[i] << " ";
        }

        cout << endl;

        // Tester un indice invalide
        cout << t[7] << endl;

    }
    catch (const out_of_range& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
