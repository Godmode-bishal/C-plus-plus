//Euclid's algorithm
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\nEnter the two numbers for which GCD is to be found\n";
    cin>>a>>b;
    if(a>=b)
    {
        while((a%b)!=0)
    {
        a=b;
        b=a%b;
    }
    cout<<"\nThe GCD of "<<a<<" and "<<b<<" is "<<b;
    }
    else
    {
        while((b%a)!=0)
    {
        b=a;
        a=b%a;
    }
    cout<<"\nThe GCD of "<<a<<" and "<<b<<" is "<<a;
    }
return 0;
}
