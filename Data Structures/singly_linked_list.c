#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;//next is addressing node type node
}node;
typedef struct singly_list
{
    node *head;
    node *tail;
}snglist;
void init(snglist *l)
{
    l->head = NULL;
    l->tail = NULL;
}
void infi(snglist *l,int data)
{
    node *p =(node*)malloc(sizeof(node));
    p->data= data;
    p->next= NULL;
    if(l->head == NULL)
    {
        l->head = p;
        l->tail =p;
    }
    else
        {   p->next = l->head ;
            l->head = p;
        }
}
void inlast(snglist *l, int data)
{
    node *p=(node *)malloc(sizeof(node));
    p->data = data;
    p->next =NULL;
    node *current = l->head;
    while(current->next != NULL)
    {
        current =current->next;
    }
    current->next = p;
    l->tail=p;
}
void del(snglist *l)//last
{
    node *current = l->head;
    node *pred;
    while( current->next !=NULL)
    {
        pred = current;
        current =current->next;
    }
    l->tail= pred;
    pred->next = NULL;
    free(current);
}
void display(snglist *l)
{
    node *current = l->head;
    if(l->head == NULL)
    {
        printf("empty linked list\n");
        return;
    }
    while(current!= NULL)
    {
        printf("%d [%d || %d]\n",current,current->data,current->next);
        current = current->next;
    }
}
void main()
{
    snglist l;
    init(&l);
    infi(&l,12);
    inlast(&l,23);
    inlast(&l, 25);
    del(&l);
    display(&l);
    //del(&l);
   // display(&l);
}
