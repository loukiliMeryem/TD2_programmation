#include<iostream>
#include<string>
using namespace std;

class Personne {
string nom;
string prenom;
string date_naissance;
public:
Personne (string nom, string prenom, string date_naissance);
void Afficher ();
string get_nom ();
string get_prenom ();
string get_date_naissance ();
};
Personne::Personne (string nom, string prenom, string date_naissance){
    this->nom = nom;
    this->prenom = prenom;
    this->date_naissance= date_naissance;
}
string Personne:: get_nom (){
return nom;
}
string Personne:: get_prenom (){
return prenom;
}
string Personne:: get_date_naissance (){
return date_naissance;
}

void Personne::Afficher(){
    cout<<"nom:"<<get_nom()<<endl<<"prenom:"<<get_prenom()<<endl<<"date de naissance:"<<get_date_naissance()<<endl;
}


 class Employee : public Personne{
 double salaire;
 public:
 Employee(const string& nom,const string& prenom, const string& date_naissance,double salaire);
 void Afficher();
 double get_salaire();
 };

 Employee::Employee(const string& nom,const string& prenom, const string& date_naissance,double salaire):Personne(nom,prenom,date_naissance){
this->salaire=salaire;
}

 double Employee::get_salaire(){
 return salaire;

 }

 void Employee::Afficher(){  
      cout<<"nom:"<<get_nom()<<endl<<"prenom:"<<get_prenom()<<endl<<"date de naissance:"<<get_date_naissance()<<"le salaire:"<<get_salaire()<<endl;}






 class Chef : public Personne {
    string service;
    public:
    Chef(string& nom, string& prenom, string& date_naissance,const string& service);
    string get_service();
    void Afficher();
 };

 Chef:: Chef(string& nom, string& prenom, string& date_naissance,const string& service):Personne(nom, prenom, date_naissance){
  this->service=service;

 }
 string Chef::get_service() {
    return service;
 }
void Chef::Afficher(){
    cout<<"nom:"<<get_nom()<<endl<<"prenom:"<<get_prenom()<<endl<<"date de naissance:"<<get_date_naissance()<<"la service:"<<get_service()<<endl;}


 class Directeur : public Personne{
string societe;
public:
Directeur(string& nom,string& prenom,string& date_naissance,const string& societe);
 void Afficher();
string get_societe();
 };

 Directeur::Directeur(string& nom,string& prenom,string& date_naissance,const string& societe):Personne(nom,prenom,date_naissance){
this->societe=societe;
 }
 string Directeur ::get_societe(){
    return societe;
 }
  void Directeur::Afficher(){
    cout<<"nom:"<<get_nom()<<endl<<"prenom:"<<get_prenom()<<endl<<"date de naissance:"<<get_date_naissance()<<"la societe:"<<get_societe()<<endl;}