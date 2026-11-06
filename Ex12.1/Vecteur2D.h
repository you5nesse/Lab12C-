#ifndef VECTEUR2D_H
#define VECTEUR2D_H
#include <iostream>
using namespace std;

class Vecteur2D {
private:
    double x;
    double y;

public:
    Vecteur2D(double a, double b) {
        x = a;
        y = b;
    }

    Vecteur2D operator+(const Vecteur2D& v) {
        return Vecteur2D(x + v.x, y + v.y);
    }


    void afficher() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

#endif
