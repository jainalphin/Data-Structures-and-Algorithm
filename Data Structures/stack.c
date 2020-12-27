#include<stdio.h>
#include<stdlib.h>
#define size 20
struct stack
{
    int data[size];
    int top;
}s;
void init(struct stack *s)
{
     s->top=-1;
}
void push(struct stack *s,int i1)
{
    if(s->top==size-1)
    {
        printf("overflow");
        return;
    }
    else
    {
        s->top=s->top+1;
        s->data[s->top]=i1;
    }
}
int pop(struct stack *s)
{
    int i2;
    if(s->top==-1)
    {
        printf("underflow");
        return 0;
    }
    else
    {
        i2=s->data[s->top];
        s->top=s->top-1;
        return i2;
    }
}
int peep(struct stack *s,int i)
{
    int value;
    if(s->top==-1)
    {
        printf("underflow");
        return 0;
    }
    else if(s->top-i+1<=0)
    {
        printf("invalid");
        return 0;
    }
    else
    {
     value =s->data[s->top-i+1];
     return value;
    }
}
 void change(struct stack *s,int m, int val)
 {
     if(s->top == -1)
    {
        printf("underflow");
    }
    else if(s->top-m+1<=0)
    {
        printf("invalid");
    }
    else
    {
        s->data[s->top-m+1] = val;
    }
 }
 void display(struct stack *s)
 {
     if(s->top==-1)
     {
         printf("underflow");
         return;
     }
     for(int i=0;i<=s->top;i++)
     {
         printf("data is %d\n",s->data[i]);
     }
 }
 void menu()
 {
     int i,v,m,v1,v2;
     while(1)
     {
         printf("menu is\n 1.push\n2.pop\n3.peep\n4.change\n5.display\n6.exit\n");
         scanf("%d",&i);
        switch(i)
        {
        case 1:
            {
                printf("enter value\n");
                scanf("%d",&v);
                push(&s,v);
                break;
            }
        case 2:
            {
                printf("poped value is %d\n",pop(&s));
                break;
            }
        case 3:
            {
                printf("enter index");
                scanf("%d",&v2);
                peep(&s,v2);
                break;
            }
        case 4:
            {
                printf("enter index and value");
                scanf("%d,%d",&m,&v1);
                change(&s,m,v1);
                break;
            }
        case 5:
            {
                display(&s);
                break;
            }
        case 6:
            {
                exit();
                break;
            }

            }
     }
 }
 void main()
 {
    init(&s);
    menu();
    }
