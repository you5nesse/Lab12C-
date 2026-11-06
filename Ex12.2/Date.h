
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:

    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }


    bool operator==(const Date& d) const {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    bool operator!=(const Date& d) const {
        return !(*this == d);
    }


    void afficher() const {
        cout << jour << "/" << mois << "/" << annee << endl;
    }
};

#endif
