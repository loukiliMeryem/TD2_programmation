#include<iostream>
#include<string>
using namespace std;
class Animal {
    public:
int age;
string nom;
public:
void set_value(int age, const string& nom);
};
void Animal::set_value(int age,const string& nom) {
   this->age = age;
   this->nom = nom;
}

class Zebra : public Animal{
    public:
      string lieu_origine;
      public:
      void set_value(int age , const string& nom,const string& lieu_origine);
      void get_value();
      };

void Zebra::set_value(int age,const string& nom,const string& lieu_origine){
      this->age = age;
        this->nom = nom;
        this->lieu_origine = lieu_origine;
}
void Zebra::get_value(){
    cout<<"age:"<<age<<endl<<"nom:"<<nom<<endl<<"lieu_origine:"<<lieu_origine<<endl;
}

class Dolphin : public Animal{
    public:
    string lieu_origine;
      void set_value(int age , const string& nom,const string& lieu_origine);
      void get_value();
};

 void Dolphin::set_value(int age,const string& nom,const string& lieu_origine){
      this->age = age;
        this->nom = nom;
        this->lieu_origine = lieu_origine;}

  void Dolphin::get_value(){
    cout<<"age:"<<age<<endl<<"nom:"<<nom<<endl<<"lieu_origine:"<<lieu_origine<<endl;}
    
     int main (){

    Zebra myzebra;
    Dolphin  mydolphin;

    myzebra.set_value(12,"chali","L'afrique");

    mydolphin.set_value(30,"sona","Australie");
    cout<<"le bilan du dolphin:"<<endl;
    mydolphin.get_value();
    cout<<"le bilan du zebra:"<<endl;
    
    myzebra.get_value();

        return 0;
     }
