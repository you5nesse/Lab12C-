
#include <iostream>
#include "Date.h"

using namespace std;

int main() {

    Date d1(6, 11, 2026);
    Date d2(6, 11, 2026);
    Date d3(15, 8, 2025);
    cout<< "d1 : "<<endl;
    d1.afficher();
    cout<< "d2 : "<<endl;
    d2.afficher();
    cout<< "d3 : "<<endl;
    d3.afficher();

    if (d1 == d2) {
        cout << "d1 et d2 sont identiques." << endl;
    } else {
        cout << "d1 et d2 sont differentes." << endl;
    }


    if (d1 != d3) {
        cout << "d1 et d3 sont differentes." << endl;
    } else {
        cout << "d1 et d3 sont identiques." << endl;
    }

    return 0;
}
