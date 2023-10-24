#include <iostream>
using namespace std;
int multiple2(int nombre) {
    return nombre % 2 == 0;
}

int multiple3(int nombre) {
    return nombre % 3 == 0;
}

int main() {
    int entier;
    cout << "Donnez un entier : ";
    cin >> entier;

    if (multiple2(entier)) {
    cout << "Il est pair" <<endl;
    }
    if (multiple3(entier)) {
        cout << "Il est multiple de 3" <<endl;
    }
    if (multiple2(entier) && multiple3(entier)) {
        cout << "Il est divisible par 6" << endl;
    }

    return 0;
}
