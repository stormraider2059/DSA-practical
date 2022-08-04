#include <stdio.h>
#include <limits.h>
struct item
{
    int value;
    int priority;
};
struct item pr[100000];
int size = -1;
void enqueue(int value, int priority)
{
    if(size == 100000)
        printf("Queue is full!\n");
    else {
        size++;
        pr[size].value = value;
        pr[size].priority = priority;
    }
}
int peek()
{
    int highestPriority = INT_MIN;
    int ind = -1;
    for (int i = 0; i <= size; i++)
    {
        if (highestPriority == pr[i].priority && ind > -1 && pr[ind].value < pr[i].value)
        {

            highestPriority = pr[i].priority;
            ind = i;
        }
        else if (highestPriority < pr[i].priority)
        {
            highestPriority = pr[i].priority;
            ind = i;
        }
    }
    return ind;
}
void dequeue()
{
    if (size == -1)
        printf("Queue is empty!\n");
    else
    {
        int ind = peek();
        for (int i = ind; i < size; i++)
            pr[i] = pr[i + 1];
        size--;
    }
}
void main()
{

    int temp, val, priority, ind;
    do
    {
        printf("Enter queue operation:\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        scanf("%d", &temp);
        if (temp == 1)
        {
            printf("Enter the value and priority for an element: ");
            scanf("%d %d", &val, &priority);
            enqueue(val, priority);
        }
        else if (temp == 2)
        {
            ind = peek();
            printf("The deleted value is %d with priority %d\n", pr[ind].value,pr[ind].priority);
            dequeue();
        }
        else if (temp == 3)
        {
            if(size==-1)
            {
                printf("Queue is empty!\n");
            }
            else
            {
            ind = peek();
            printf("The value with the highest priority is %d and has a priority of %d\n", pr[ind].value, pr[ind].priority);
            }
        }
        else
            continue;
    } while (temp != 4);
}
