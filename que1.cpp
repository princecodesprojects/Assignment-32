#include <iostream>
using namespace std;

class Float
{
    float a;
    public:
    void setData(int x)
    {
        a=x;
    }
   Float operator+(Float f)
    {
       Float t;
       t.a=a+f.a;    
       return t; 
    }
    Float operator-(Float f)
    {
       Float t;
       t.a=a-f.a;    
       return t; 
    }
    Float operator*(Float f)
    {
       Float t;
       t.a=a*f.a;    
       return t; 
    }
    Float operator/(Float f)
    {
       Float t;
       t.a=a/f.a;    
       return t; 
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
};

int main()
{
    Float f1,f3,f4,f5;
    Float f2,f6;
    f1.setData(2);
    f2.setData(3);
    f3=f1+f2;
    f3.display();
    f4=f1-f2;
    f4.display();
    f5=f1*f2;
    f5.display();
    f6=f1/f2;
    f6.display();
    return 0;
}