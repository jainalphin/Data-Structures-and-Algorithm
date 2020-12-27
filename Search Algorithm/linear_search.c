#include<stdio.h>
#include<stdlib.h>
#define size 5
void ls(int a[],int target)
{
    int i;
    for(i=0; i<size;i++)
    {
        if(a[i] == target)
        {
            printf("match found");
            break;
        }
    }
        if(i==size-1)
        {
            printf("match not found");
        }
}
void main()
{
    int a[]={21,45,34,56,98};
    ls(a,45);
}
