#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *pre;
    struct node *next;
}node;
typedef struct doubly_list
{
    node * head;
    node * tail;
}dllist;
void init(dllist *l)
{
    l->head =NULL;
    l->tail =NULL;
}
void insert(dllist *l,int data)
{
    node *p=(node*)malloc(sizeof(node));
    p->data = data;
    p->pre = NULL;
    p->next =NULL;
    if(l->head == NULL)
    {
        l->head = p;
        l->tail =p;
    }
    else
    {
        p->pre = l->tail;
        l->tail->next =p ;
        l->tail =p;
    }
}
void del(dllist *l)
{
    node * current ;
    current = l->tail;
    if(l->head == NULL)
    {
        return;
    }
    else
    {
        if(l->head == l->tail)
        {
            l->head = NULL;
           l->tail = NULL;
            free(current);
        }
        else
        {
            current->pre->next = NULL;
            l->tail =current->pre;
            free(current);
            }
    }
}
void display(dllist * l)
{
    node * current=l->head;
     if(l->head == NULL)
    {
        printf("empty linked list\n");
        return;
    }
    while(current !=NULL)
    {
        printf("%d [%d || %d || %d]\n", current,current->pre,current->data,current->next);
        current= current->next;
    }
}
void main()
{
    dllist l;
    init(&l);
    insert(&l,23);
    insert(&l,24);
    //del(&l);
    display(&l);
}
