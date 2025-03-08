#include<stdio.h>
void main()
{
    int a=7000,n;
    printf("enter input:");
    scanf("%d",&n);
    if(n>0 && n<=2000)
    {
        printf("Time estimated:25 min");
    }
    else if(n>=2001 && n<=4000)
    {
        printf("Time estimated:35 min");
    }
    else if(n>4000 && n<a)
    {
        printf("Time estimated:45 min");
    }
    else if(n==0)
    {
        printf("Time estimated:0 min");
    }
    else if(n>a)
    {
        printf("overloaded");
    }
    else{
        printf("invalid input");
    }

}