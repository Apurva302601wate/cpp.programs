//charachter is a vowel or consonant
#include<iostream>
using namespace std;
int main()
{
    char p;
    cin>>p;
    if (p== 'a' || p=='e' || p=='i' || p=='o' || p=='u')
    {cout<<"vowel";}
    else{
        cout<<"consonant";
    }
    return 0;
}