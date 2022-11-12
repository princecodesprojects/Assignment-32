#include<iostream>
using namespace std;

class A
{
    public:
  A()
  {
    cout<<"A() called\n";
  }

};

class B:public A
{
  public:
  B()//:A()
  {
    cout<<"B called\n";
  }
};

class C:public B
{
    public:
  C()//:B()
  {
    cout<<"C called\n";
  }

};


int main()
{
system("cls");
C c;
    return 0;
}