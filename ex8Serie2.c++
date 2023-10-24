#include<iostream>
using namespace std;

 class NbreComplex{
   private:
   double rel;
   double img;
   public:
   NbreComplex(double rel, double img);
   double getRel() const;
   double getImg() const;

 };
 double NbreComplex::getRel() const{
    return rel;
 }
 double NbreComplex::getImg() const{
    return img;}
NbreComplex::NbreComplex(double rel, double img){
    this->rel = rel;
    this->img = img;
}

    int main(){

  cout<<"1:l'addition"<<endl<<"2:la soustraction"<<endl<<"3:la multiplication"<<endl<<"4:la division"<<endl;
  int n;
  cout<<"entrer une opération :";
  cin>>n;
   NbreComplex z1(2,6), z2(8,2.5);
   double x,y;
  if(n==1)
 {
  x=z1.getRel()+z2.getRel();
  y=z1.getImg()+z2.getImg();
  cout<<"la partie réelle de z1+z2 est:"<<x<<endl;
  cout<<"la partie imaginaire de z1+z2 est:"<<y<<endl;
 }
 if(n==2){
 x=z1.getRel()-z2.getRel();
y= z1.getImg()-z2.getImg();
  cout<<"la partie réelle de z1-z2 est:"<<x<<endl;
  cout<<"la partie imaginaire de z1-z2 est:"<<y<<endl;
 }

if(n==3){
x= z1.getRel()*z2.getRel()+z1.getImg()*z2.getImg();
y=z1.getRel()*z2.getImg()+z1.getImg()*z2.getRel();
  cout<<"la partie réelle de z1*z2 est:"<<x<<endl;
  cout<<"la partie imaginaire de z1*z2 est:"<<y<<endl;
}
if(n==4){
 x= z1.getRel()/z2.getRel()+z1.getImg()/z2.getImg();
y=z1.getRel()/z2.getImg()+z1.getImg()/z2.getRel();
  cout<<"la partie réelle de z1/z2 est:"<<x<<endl;
  cout<<"la partie imaginaire de z1/z2 est:"<<y<<endl;
}


        return 0;}