/*1. Accept 10 elements in an array and separate the even and odd elements in it to 2 diff arrays.
Eg: a[5]={10, 13, 20, 12, 15}
Divide this into 2 .
o/p: {10,20,12}
        {13,15}*/
#include <stdio.h>
int main()
{
    int a[100];
    int i=0;
    int even[100];
    int eve=0;
    int odd[100];
    int od=0;
    for(int i=0; i<10;i++)
    {
        printf("Enter a Number:- ");
        scanf("%d", &a[i]);
    }
    printf("Numbers entered:->\t");
    for(int b=0;b<10;b++)
    {
        printf("%d\t", a[b]);
    }
    for(int b=0;b<10;b++)
    {
        if(a[b]%2==0)
        {
            for(;i<i+ 1;i++)
            {
                even[i] = a[b];
                eve++;
            }
        }
        else
        {
         for(;i<i+ 1;i++)
            {
                odd[i] = a[b];
                od++;
            }
        }
    }
    printf("Even Numbers:-\t");
    for(int i=0;i<eve;i++)
    {
        printf("%d\t", even[i]);
    }
    printf("\nOdd Numbers:-\t");
    for(int i=0;i<od;i++)
    {
        printf("%d\t", odd[i]);
    }
}
