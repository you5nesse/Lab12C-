
#ifndef TABLEAU_H
#define TABLEAU_H

#include <iostream>
#include <stdexcept>
using namespace std;

class Tableau {
private:
    int* data;
    int taille;

public:

    Tableau(int n) {
        taille = n;
        data = new int[taille];


        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    int& operator[](int indice) {
        if (indice < 0 || indice >= taille) {
            throw out_of_range("Indice invalide !");
        }

        return data[indice];
    }


    ~Tableau() {
        delete[] data;
    }
};

#endif
