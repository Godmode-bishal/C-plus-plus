#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
int primepalindrome(long int);


int main()
{
    long int n;
    scanf("%ld",&n);
    int l;
    long int i=n;
    while(i)
    {
    l=primepalindrome(i);

    if(l==1)
        {
            printf("%ld",i);
            exit(0);
        }
    i++;
    }
return 0;
}

int primepalindrome(long int num)
{
    int m=0,p=num,q=1,k,j;
    while(p)
    {
        m*=10;
        m+=p%10;
        p/=10;
    }
    if(m==num)
        {
           k=sqrt(num);
    for(j=2;j<=k;j++)
    {
        if(num%j==0)
             return 0;
    }
    return 1;
        }
else
    return 0;
}

