#include <iostream>
using namespace std;

class Rectangle
{
    
    public:
    int area(int l,int b)
    {
        int ar=l*b;
        return ar;
    }
    float area(float l,float b)
    {
        float ar=l*b;
        return ar;
    }
};

int main()
{
    Rectangle r;
    int x=r.area(2,3);
    cout<<"Area = : "<<x<<endl;
    return 0;
}