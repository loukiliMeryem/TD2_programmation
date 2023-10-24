#include<iostream>
using namespace std;

  void compteur()
  {
    static int i=0;
      i++;
    cout<<"appel numero "<<i<<endl;  
    }
  int main()
  {
     
    compteur();
      compteur();
        compteur();
          compteur();
            compteur();

return 0;
  }