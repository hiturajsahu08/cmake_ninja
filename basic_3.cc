#include<iostream>
using namespace std;
namespace A
{
  int x = 5;
  void printX()
  {
    // function statements goes here
    cout<<x<<endl;
  }
}

namespace B
{
  int x=10;
  void printX()
  {
    // function statementsgoes here
    cout<<x<<endl;
  }
}

#include<iostream>
int main_basic_3()
{
    A::printX() ;
    B::printX();
   
    return 0;
}