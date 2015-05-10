//Small factorial
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    int t,n[100],i,j,c;
    double fac;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        fac=1.0;
        c=0;
        while(n[i]!=0)
        {

            fac=fac*n[i];
            n[i]--;
        }

    char store[200];
    sprintf(store, "%f", fac);
    char *tok;
    tok = strtok(store, ".");
    for(i=0; tok[i]; i++)
        printf("%d", tok[i]-48);
    puts("");

}

    return 0;
}
