#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5]={25,24,23,21,22};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=4-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int swap;
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }
    printf("sorted array:\n");
    for(int i=0;i<5;i++)
    printf("%d\n",array[i]);
}
