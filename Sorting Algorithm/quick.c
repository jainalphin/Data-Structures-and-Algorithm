#include<stdio.h>
#include<conio.h>
int partition(int array[],int lb, int ub)
{
    int piviot = array[lb];
    int swap;
    int d = lb;
    int up = ub;
    {
        while(array[d]<= piviot && d<=ub)//should be noticed
        { d++;}
        while(array[up]> piviot)
        { up--; }
        if(d < up)
        {
            swap = array[up];
            array[up]=array[d];
            array[d]=swap;
        }
    }
    array[lb]=array[up];
    array[up]=piviot;
    return up;
}
void quick_sort(int array[],int lb,int ub)
{
    if(lb <ub)
   {
        int j = partition(array,lb,ub);
        quick_sort(array,lb,j-1);
        quick_sort(array,j+1,ub);
   }
}

void main()
{
    int array[]={25,24,23,21,22,100000,19};
    quick_sort(array,0,6);
     printf("Sorted list in ascending order:\n");
    for (int i = 0; i <7; i++)
        printf("%d\n", array[i]);
}
