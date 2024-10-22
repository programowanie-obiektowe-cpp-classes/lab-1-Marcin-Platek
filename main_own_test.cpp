#include <iostream>
#include "Wektor2D.hpp"

using namespace std;
// treść z pliku wykonywalnego z dodatkami własnymi

int main()
{
    Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
    v1.setX(1.);             // setter
    v1.setY(1.);             // setter
    double x1 = v1.getX();   // getter
    double y1 = v1.getY();   // getter
    cout << "Wektor v1: (" << x1 << ", " << y1 << ")" << endl;

    Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne
    cout << "Wektor v2: (" << v2.getX() << ", " << v2.getY() << ")" << endl;

    Wektor2D sum = v1 + v2; // dodawanie wektorów
    cout << "Suma v1 + v2: (" << sum.getX() << ", " << sum.getY() << ")" << endl;

    double prod = v1 * v2; // iloczyn skalarny
    cout << "Iloczyn skalarny v1 * v2: " << prod << endl;

    return 0;
}
