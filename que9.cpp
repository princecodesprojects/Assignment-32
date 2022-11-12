#include<iostream>
using namespace std;
#include<math.h>

class Area
{
   float area;
   public:
   Area(int r)
   {
      area=3.14*r*r;
      cout<<"Area of circle is : "<<area<<endl;
   }

   Area(int l,int w)
   {
      area=l*w;
      cout<<"Area of Rectangle is : "<<area<<endl;
   }
   Area(int a,int b,int c)
   {
      float s=(a+b+c)/2.0;
      area=sqrt(s*(s-a)*(s-b)*(s-c));
      cout<<"Area of Triangle is : "<<area<<endl;
   }

};




int main()
{
   system("cls");
   Area(2);
   Area(1,2);
   Area(7,2,14);//a+b>c,b+c>a,c+a>b
    return 0;
}