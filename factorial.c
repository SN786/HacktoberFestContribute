// This basic C program is about how to find the factorial of the given number.
#include<stdio.h>
main()
{
    int n,i,s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
        
    }
    printf("%d ",s);
}
