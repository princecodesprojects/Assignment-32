#include<iostream>
using namespace std;

class A
{
   public:
   A()
   {
     cout<<"Default called of A"<<endl;
   }
   A(int b)
   {
     cout<<"Parameterized called A\n";
   }
};

class B:public A
{
    public:
  B()
   {
     cout<<"Default called of B"<<endl;
   }
   B(int b)
   {
     cout<<"Parameterized called B\n";
   }

};


int main()
{
  system("cls");
  B b(2);
    return 0;
}