
#ifndef PRODUIT_H
#define PRODUIT_H

#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;

public:

    Produit(string n, double p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }


    friend ostream& operator<<(ostream& os, const Produit& p) {
        os << "Nom : " << p.nom << endl;
        os << "Prix : " << p.prix << " DH" << endl;
        os << "Quantite : " << p.quantite << endl;

        return os;
    }
};

#endif
