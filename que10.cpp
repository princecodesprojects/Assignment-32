#include<iostream>
using namespace std;
#include<string.h>



class Player
{
    int player_no;
    string name;
    int num_match;
    int *goals;

    public:
    Player()
    {
        int i;
        cout<<"\n Enter Player No. : ";
        cin>>player_no;
        cout<<"\n Enter Player Name : ";
        fflush(stdin);
        getline(cin,name);
        cout<<"\n Enter No. Of Matchs : ";
        cin>>num_match;
        goals=new int[num_match];
        for(i=0;i<=num_match-1;i++)
        {
            cout<<"\nEnter No. of Goals in "<<i+1<<" matches";
            cin>>goals[i];
        }
    }
    void display()
    {
        int i;
        cout<<"---------------------------------"<<endl;
        cout<<"Player No. : "<<player_no<<endl;
        cout<<"Name       : "<<name<<endl;
        cout<<"No. of Matches Played : "<<num_match<<endl;
        for(i=0;i<=num_match-1;i++)
        {
            cout<<"Match "<<i+1<<" Goals : "<<goals[i];
        }
    }
};




int main()
{
  //system("cls");
 Player p;
 p.display();
    return 0;
}