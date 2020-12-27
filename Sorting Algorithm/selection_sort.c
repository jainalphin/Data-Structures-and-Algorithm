#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5]={20,17,18,19,16};
    for(int i=0;i<4;i++)
{
    int min;
    min=i;
    {
        for(int j=i+1;j<5;j++)
        {
            if(array[j]<array[min])
                { min=j; }
        }
        if(min != i)
        {
            int swap;
            swap = array[i];
            array[i] = array[min];
            array[min] = swap;
        }
    }
}
    printf("Sorted list in ascending order:\n");

  for (int i = 0; i <5; i++)
    printf("%d\n", array[i]);
}
