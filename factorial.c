#include<stdio.h>
main()
{
    int n,i,s=1;//Declaring variables
    scanf("%d",&n);
    for(i=1;i<=n;i++)//for looping
    {
        s=s*i;
        
    }
    printf("%d ",s);//Printing
}
