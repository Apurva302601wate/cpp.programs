#include<iostream>
using namespace std;

int lcm( int a, int b)
{
    int x,lcm;
    if (a>b)
    {x=a;}
    else{
        x=b;
    }

   while(x>1)
   {
    if(x%a==0 && x%b==0)
    {lcm=x;}
   }
   return lcm;
}
int main()
{
    int a,b;
    cin>>a>>b;
        lcm(a,b);
    cout<<"lcm is"<<lcm;
    return 0;
    
}
