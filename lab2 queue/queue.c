#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int front=0;
int rear=-1;
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
    if(rear==MAX-1)
    {

        printf("Queue is full!\n");
    }
    else
    {

        printf("Enter a number to push: ");
        scanf("%d",&num);
        rear++;
        data[rear]=num;
    }
}
void dequeue()
{

    if(front>rear)
    {

        printf("Queue is empty!\n");
    }
    else
    {

        printf("The dequeued element = %d\n",data[front]);
        front++;
    }
}
void display()
{

    int i;
    if(front>rear)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue elements are: \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",data[i]);
        }
    }
}
