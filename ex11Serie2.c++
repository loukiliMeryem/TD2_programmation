#include<iostream>
#include<string>
#include <cmath> 
using namespace std;

  class Vecteur3D {
  float x;
  float y;
  float z;
public:
 Vecteur3D();
void Afficher() const;
float add(Vecteur3D v);
float Poduit_Scalaire(Vecteur3D v) const;
bool Coincide(Vecteur3D v) const;
float Norme(float x, float y,float z) const;
Vecteur3D normax(Vecteur3D v) const;

  };
  void Vecteur3D::Afficher() const{
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
  }
  float Vecteur3D::add(Vecteur3D v ){
    return v.x+=this->x, v.y+=this->y,v.z+=this->z;
  }   
  float Vecteur3D::Poduit_Scalaire(Vecteur3D v)const{
    return v.x*this->x + v.y*this->y;

  }
  bool Vecteur3D::Coincide(Vecteur3D v)const{
    return (v.x==this->x && v.y==this->y && v.z==this->z);}

    float Vecteur3D:: Norme(float x,float y, float z)const{
    return sqrt(x*x + y*y + z*z);
    }
   Vecteur3D:: Vecteur3D normax(Vecteur3D v) const{
   float norme1=norme();
   float norme2=this->norme();
  return (norme1>norme2)? *this: norme1;
   }