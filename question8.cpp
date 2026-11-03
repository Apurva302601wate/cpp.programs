//a chr is uppercase lowercase special chr or digit DOUBT
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if (ch>='a' && ch<='z')
    {
        cout<<"lowercase";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"uppercase";
    }
    else if( ch<'9' && ch>'0')
    {
        cout<<"digit";
    }
    else 
    {
        cout<<"spec chr";
    }
return 0;
}