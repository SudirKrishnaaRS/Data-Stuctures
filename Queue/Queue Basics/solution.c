//Sudir krishnaa RS
// LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

// Queue Basics
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int front=-1;
int rear=-1;
int arr[SIZE];
void enqueue()
{
    if(rear>=SIZE)
    {
        printf("Queue is FULL!! Cannot Insert");
    }
    else
    {
    
    if(front==-1)
    {
        front++;
    }
    int data;
    printf("Enter the element to be inserted:");
    scanf("%d",&data);
    rear++;
    arr[rear]=data;
    }
    
}

void dequeue()
{
    if(front ==-1 || front==rear+1)
    {
         printf("Queue is Empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",arr[front]);
        front++;
    }
}

void display()
{
    if(front ==-1 || front==rear+1)
    {
         printf("Queue is Empty!!");
    }
    else
    {
        printf("\nThe elements of queue are: ");
        for(int i=front;i<=rear;i++)
        {
        printf("%d ",arr[i]);
        }
    }
}

int main()
{
    int n=0;
    printf("Enter the size of queue:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        enqueue();
    }
    display();
    dequeue();
    dequeue();
    display();
    return 0;
}
