#include<stdio.h>
#include<stdlib.h>
#define size 5
int bs(int a[],int low,int high,int target)
{
    int mid;
    while(low <= high)
    {
        mid=(low+high)/2;
        if(target < a[mid])
        {
            high=mid-1;
        }
        else if(target > a[mid])
        {
            low=mid+1;
        }
        else
        {
            printf("match found\n");
            printf("index is %d",mid);
            return mid;
        }
    }
    printf("error");

}
void main()
{
    int low =0;
    int high=size-1;
    int a[]={2,3,5,6,8};//here array start with 0 so low takes 1 and high 4
    bs(a,low,high,6);
}
