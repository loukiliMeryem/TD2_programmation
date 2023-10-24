#include"ex13Point.h"
#include <iostream>
using namespace std;
int main (){


Point point(1.2,3.8);

point.Afficher();

point.Deplacer(2,3.1);
point.Afficher();
    return 0;
}