#include<stdio.h>
void main()
{
    int N=10,k=5,M,a,b;
    printf("enter input");
    scanf("%d",&M);
    if(M<=N && M>=1)
    {
        a=M;
        b=N-M;
        printf("Number of candies sold:%d",a);
        printf("Number of candies Available:%d",b);
    }
    else
    {
        printf("Invalid Value");
        printf("Number of candies available:%d",N);
    }
}