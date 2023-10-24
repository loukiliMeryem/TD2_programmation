#include <iostream>
using namespace std;

int main() {
    int a = 42; // Déclare un entier 'a' et l'initialise à 42
    int &ref_a = a; // Déclare une référence 'ref_a' à 'a'
    int *p_a = &a; // Déclare un pointeur 'p_a' pointant vers 'a'

    cout << "a : " << a << endl;
    cout << "Adresse de a : " << &a << endl;
    cout << "Valeur pointée par p_a : " << *p_a << endl;
    cout << "Adresse de p_a : " << p_a << endl;
    cout << "Adresse de ref_a : " << &ref_a << endl;
    cout << "Valeur pointée par ref_a : " << ref_a << endl;

    return 0;
}
