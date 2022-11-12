#include <iostream>
using namespace std;

class Animals
{
    protected:
    string sound;
    public:
    string Sound()
    {
        return sound;
    }
    void setSound(string sound)
    {
        this->sound=sound;
    }
};

class Dogs:public Animals
{
    protected:
    string dog_sound;
    public:
    string Sound()
    {
        return dog_sound;
    }
    void setSound(string sound)
    {
        this->dog_sound=sound;
    }
};

int main()
{
    system("cls");
    Animals cat;
    cat.setSound("Meyao");
    string sound=cat.Sound();
    cout<<"Sound of cat : "<<sound<<endl;

    Dogs pets;
    pets.setSound("Bhow");
    cout<<"Sound of pets is : "<<pets.Sound()<<endl;
   
    return 0;
}