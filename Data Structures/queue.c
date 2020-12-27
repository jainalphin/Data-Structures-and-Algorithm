#include<stdio.h>
#include<stdlib.h>
#define size 10
typedef struct cir_queue
{
    int item[size];
    int rear,front;
}que;
void init(que *q)
{
    q->front =size-1;
    q->rear = size-1;
}
void enque(que *q,int data)
{
    if((q->rear+1)%size == q->front)
    {
        printf("overflow");
    }
    else
    {
        q->rear =(q->rear+1)%size;
        q->item[q->rear]=data;
    }
}
int deque(que *q)
{
    if(q->front == q->rear)
    {
        printf("underflow");
        return(-1);
    }
    else
    {
        int item = q->item[q->front];
        if (q->front == q->rear)
        {
           q-> front = -1;
            q->rear = -1;
        }
        else
       {
           q->front =(q->front+1)%size;
           }
           printf("item is %d\n",item);
        return item;
    }
}
void display(que *q)
{
    int i;
    if(q->front == q->rear)
    {printf(" \n Empty Queue\n");}
    else
    {
    for(i=(q->front+1)%size; i!=(q->rear+1)%size; i=(i+1)%size)
    {
        printf("%d\n",q->item[i]);
    }
}
}
void main()
{
    que q;
    init(&q);
    enque(&q,25);
    deque(&q);
    display(&q);
}
