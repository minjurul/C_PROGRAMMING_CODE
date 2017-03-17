#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void insert_by_priority(int);
void delete_by_priority(int);
void create();
void chack(int);
void display_pqueue();
int pri_que[MAX];
int front,rear;

int main()
{
    int n,ch;
    printf("\n1-insert an element into queue.");
    printf("\n2-Delete an element into queue.");
    printf("\n3-Display queue element.");
    printf("\n4-Exit");
    create();
    while(1)
    {
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n Enter value to be insert:");
            scanf("%d",&n);
            insert_by_priority(n);
            break;
        case 2:
            printf("\nEnter value to delete:");
            scanf("%d",&n);
            delete_by_priority(n);
            break;
        case 3:
            display_pqueue();
            break;
        case 4:
            exit(0);

        default:
            printf("\n Choice is incorrect,Enter a correct choice");
        }
    }
}

void create()
{
    front=rear=-1;
}

void insert_by_priority(int data)
{

    if(rear>=MAX-1)
    {
        printf("\nQueue overflow no more element can be inserted");
        return;
    }
    if((front==-1)&&(rear==-1))
    {
        front++;
        rear++;
        pri_que[rear]=data;
        return;
    }
    else
        chack(data);
    return;
}

void chack(int data)
{
    int i,j;
    for(i=0;i<=rear;i++)
    {
        if(data>=pri_que[i])
        {
           for(j=rear+1;j>i;j--)
           {
               pri_que[j]=pri_que[j-1];
           }
           pri_que[i]=data;
           return;
        }
    }
    pri_que[i]=data;
}

void delete_by_priority(int data)
{
    int i;
    if((front==-1)&&(rear==-1))
    {

        printf("\nQueue is empty no element to delete");
        return;
    }
    for(;i<=rear;i++)
    {
        if(data==pri_que[i])
        {
            for(;i<rear;i++)
            {
                pri_que[i]=pri_que[i+1];
            }
            pri_que[i]=-99;
            rear--;
            if(rear==-1)
                front=-1;
            return;
        }
    }
    printf("\%d not found in queue to delete",data);
}


void display_pqueue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("\nQueue is empty");
        return;
    }
    for(;front<=rear;front++)
    {
        printf("%d",pri_que[front]);
    }
    front=0;
}















