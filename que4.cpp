#include <iostream>
using namespace std;

class Addition
{
    int sum;
    public:
    void add(int a,int b,int c=0)
    {
        sum=a+b+c;
    }
    // void add(int a,int b,int c)
    // {
    //     sum=a+b+c;
    // }
    void display()
    {
        cout<<"Sum is : "<<sum<<endl;
    }
};

int main()
{
    Addition a1,a2;
    a1.add(2,3);
    a1.display();
    a2.add(2,3,4);
    a2.display();
    return 0;
}