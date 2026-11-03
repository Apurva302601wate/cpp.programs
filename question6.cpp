//wheter a char is alphabet or not]
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {cout<<"alphabet";}
    else{cout<<"not an alphabet";}
    return 0;
}