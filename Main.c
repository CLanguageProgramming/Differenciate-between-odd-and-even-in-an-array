/*1. Accept 10 elements in an array and separate the even and odd elements in it to 2 diff arrays.
Eg: a[5]={10, 13, 20, 12, 15}
Divide this into 2 .
o/p: {10,20,12}
        {13,15}*/
#include <stdio.h>
int main()
{
    int get;
    int i;
    int a[100];
    int eve=0;
    int od=0;
    int odd[100];
    int even[100];
    printf("Enter the number of times you want to enter:-> ");
    scanf("%d", &get);
    for(i=0;i<get;i++)
    {
        printf("Enter a number >> ");
        scanf("%d", &a[i]);
    }
    printf("You have entered:-> ");
    for(i=0;i<get;i++)
    {
        printf("%d,", a[i]);
    }
    for(i=0;i<get;i++)
    {
        if(a[i]%2==0)
        {
            even[eve] = a[i];
            eve++;
        }
        else
        {
            odd[od] = a[i];
            od++;
        }
    }
    printf("\nOdd:-> ");
    for(i=0;i<od;i++)
    {
        printf("%d,", odd[i]);
    }
    printf("\nEven:-> ");
    for(i=0;i<eve;i++)
    {
        printf("%d,", even[i]);
    }
}
