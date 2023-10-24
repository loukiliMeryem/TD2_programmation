#include"ex13Point.h"
#include<iostream>
using namespace std;
Point::Point (float x, float y){
 this->x = x;
 this->y = y;
}
void Point::Deplacer (float dx, float dy) {
 x+=dx;
 y+=dy;
 

}
void Point:: Afficher () {
cout<<"les coordonnées de ce point :"<<"("<<x<<","<< y<<")"<<endl;
    
}