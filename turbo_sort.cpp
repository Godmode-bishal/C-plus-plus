//Turbo sort
#include<iostream>
#include<cstdio>
using namespace std;
void selsort(long [],long);
long i,j;
int main()
{
    long t,n[1000000];
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n[i]);
    }
selsort(n,t);
return 0;
}
void selsort(long a[],long m)
{
    long i,j,small,pos,t;
    for(i=0;i<m;i++)
    {
        small=a[i];
        pos=0;
        for(j=i+1;j<m;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                pos=j;
            }
        t=a[i];
        a[i]=a[pos];
        a[pos]=t;
        }
    }
for(i=0;i<m;i++)
    {
        printf("%ld\n",a[i]);
    }
}
