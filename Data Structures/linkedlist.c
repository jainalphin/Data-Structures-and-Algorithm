#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}n;
typedef struct linkedlist
{
  n *head;
  n *tail;
}list;
void init(list *l)
{
    l->head=NULL;
    l->tail=NULL;
}
void infi(list *l,int i)
{
    n *m=(n*)malloc(sizeof(n));
    m->data=i;
    m->link=NULL;
    if(l->head==NULL)
    {
        l->head=m;
        l->tail=m;
    }
    else
    {
        m->link=l->head;
        l->head=m;
    }
}
void inlast(list *l,int i)
{
    n *m=(n*)malloc(sizeof(n));
    m->data=i;
    m->link=NULL;
    n *current;
    current=l->head;
    while(current->link !=NULL)
    {
        current=current->link;
    }
    current->link=m;
    l->tail=m;
}
void display(list *l)
{
    int i=1;
    n *current =l->head;
    if(l->head==NULL)
    {
        printf("List Is Empty");
        return;
    }
    printf("linked list:\n");
    while(current!=NULL)
    {
        printf("%d.%p[%d|%p]\n",i,current,current->data,current->link);
        current=current->link;
        i++;
    }
}
void main()
{
    list l;
    init(&l);
    infi(&l,12);
    infi(&l,121);
    display(&l);
    inlast(&l,1);
    display(&l);
}
