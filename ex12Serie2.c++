#include<iostream>
using namespace std;

 class Test {
  public:
  void Call();
 };
  void Test::Call() {
     static int i=0;
      i++;
    cout<<"appel numero "<<i<<endl;
  }

  int main()
  {
     Test T;
    T.Call();
    T.Call();
    T.Call();
    T.Call();

return 0;
  }