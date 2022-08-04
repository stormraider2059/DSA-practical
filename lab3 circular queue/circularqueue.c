#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int front=MAX-1;
int rear=MAX-1;
int data[MAX];
void enqueue();
void dequeue();
void display();
void main()
{

    int ch;
    while(1)
    {

        printf("Enter queue operation:\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("Invalid operation!\n");
        }
    }
}
void enqueue()
{

    int num;
    if((rear+1)%MAX==front)
    {

        printf("Queue is full!\n");
    }
    else
    {

        printf("Enter a number to push: ");
        scanf("%d",&num);
        rear=(rear+1)%MAX;
        data[rear]=num;
    }
}
void dequeue()
{

    if(rear==front)
    {

        printf("Queue is empty!\n");
    }
    else
    {
        front=(front+1)%MAX;
        printf("The dequeued element = %d\n",data[front]);

    }
}
void display()
{

    int i;
    if(rear==front)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue elements are: \n");
        for(i=(front+1)%MAX;i!=rear;i=(i+1)%MAX)
        {
            printf("%d\n",data[i]);
        }
        printf("%d\n",data[rear]);
    }
}
