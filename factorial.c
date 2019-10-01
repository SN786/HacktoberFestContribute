#include<stdio.h>
main()// function
{
    int n,i,s=1;//intitializing variables
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
        
    }
    printf("%d ",s);//printing
}
