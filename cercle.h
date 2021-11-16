// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
Class cercle{
private:
    double rayon;
    point centre;
public:
    cercle(double ra, point c);
    double changementrayon(ra);

    void affiche();

    int changement_r();
    int calcul_s();
    double calculsurface(double ra);
    double calculperimetre(double ra);
    void translation(double a);
}
