#include<iostream>
using namespace std;

class  Copy
{
  int n,f;
   public:
   Copy(int n)
   {
    cout<<"Default\n";
    this->n=n;
   }
   Copy(Copy &x)
   {
     cout<<"Copy called\n";
     n=x.n;
     
   }

   void calFac()
   {
      int sum=1;
     for(int i=1;i<=n;i++)
     {
        sum=sum*i;
     }
     f=sum;
   }

   void display()
   {
     cout<<"F= : "<<f<<endl;
   }

};


int main()
{
  system("cls");
  Copy c(1),c1(6);
  Copy c2=c1;
  c1.calFac();
  c1.display();
  c2.calFac();
  c2.display();
  
    return 0;
}