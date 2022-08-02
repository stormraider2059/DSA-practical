#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int stack[MAX];
void push();
void pop();
void display();
void main()
{

    int ch;
    while(1)
    {

        printf("Enter your stack operation:\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch (ch)
        {

            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("Invalid Operation!\n");
        }
    }
}
void push()
{
    int val;
    if(top==MAX-1)
    {

        printf("Stack is full!");
    }
    else
    {
        printf("Enter an element to push: ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}

void pop()
{

    if(top==-1)
    {
        printf("Stack is empty!");
    }
    else
    {
        printf("Popped element = %d\n",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty!");
    }
    else
    {
        printf("Stack elements: \n");
        for(i=top;i>=0;--i)
        {
            printf("%d\n",stack[i]);
        }
    }
}
