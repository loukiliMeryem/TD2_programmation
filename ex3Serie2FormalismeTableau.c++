#include <iostream>
using namespace std;

int main() {
    int MAX = 0;
    int MIN = 0;
    int T[10];

    for (int i = 0; i < 10; i++) {
        cout << "le nombre " << i + 1 << ": ";
        cin >> T[i];
    }

    MAX = T[0]; // Initialise MAX avec la première valeur du tableau
    MIN = T[0]; // Initialise MIN avec la première valeur du tableau

    for (int i = 1; i < 10; i++) {
        if (T[i] > MAX) {
            MAX = T[i]; // Met à jour MAX si T[i] est plus grand
        }
        if (T[i] < MIN) {
            MIN = T[i]; // Met à jour MIN si T[i] est plus petit
        }
    }

    cout << "le plus grand nombre est : " << MAX << endl;
    cout << "le plus petit nombre est : " << MIN << endl;

    return 0;
}
