        #include<iostream>
    int main()
    {
    long int n,k,a,i,count=0;
    printf("%ld%ld",&n,&k);
    for(i=0;i<n;i++)
    {
    scanf("%ld",&a);
    if(a%k==0)
    count++;
    }
    printf("%ld",count);
    return 0;
    }
