#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    int i;
    int x;
    int gcd;
    if(a>b)
    {
     for(i=a;i>0;i--)
     {
        if(x%a==0 && x%b==0)
        gcd=x;
     }
    }
    else
    {
        for(i=b;i>0;i--)
        {
            if(x%a==0 && x%b==0)
            {gcd=x;}
        }
    }
    return gcd;
}
int main()
{
int a,b;
cin>>a>>b;
gcd(a,b)
return 0; 

}
