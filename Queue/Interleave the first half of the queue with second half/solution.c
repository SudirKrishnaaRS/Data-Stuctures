//Sudir krishnaa RS
// LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

// Interleave the first half of the queue with second half

// Input : 11 12 13 14 15 16 17 18 19 20 
// Output : 11 16 12 17 13 18 14 19 15 20

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int front=-1;
int rear=-1;
int arr[SIZE];
int res[SIZE];
int front2=-1;
int rear2=-1;
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

void interleave()
{
    int q=0;
    front2=0;
    
    for(int i=front;i<=rear;i++)
    {
        if(i%2==0)
        {
            res[i]=arr[q];
            q++;
        }
    }
    
    for(int i=front;i<=rear;i++)
    {
        if(i%2!=0)
        {
            res[i]=arr[q];
            q++;
        }
    }
    
    rear2=q-1;
    
}

void display()
{
    if(front2 ==-1 || front2==rear2+1)
    {
         printf("Queue is Empty!!");
    }
    else
    {
        printf("\nThe elements of queue are: ");
        for(int i=front2;i<=rear2;i++)
        {
            printf("%d ",res[i]);
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
    interleave();
    display();
    return 0;
}

