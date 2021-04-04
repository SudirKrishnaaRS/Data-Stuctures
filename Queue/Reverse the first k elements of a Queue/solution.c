//Sudir krishnaa RS
// LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

// Reverse the first k elements of a Queue 

// Input : Q = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100] k = 5 
// Output : Q = [50, 40, 30, 20, 10, 60, 70, 80, 90, 100]

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
void reverse()
{
    int k=0;
    scanf("%d",&k);
    k=k-1; // as arr index starts from 0th index so subtract k by 1 
    int mid=k/2;
    if(k%2==0)
    {
        for(int i=front,j=k;i<=mid;i++,j--)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    else
    {
        for(int i=front,j=k;i<mid;i++,j--)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
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
    reverse();
    display();
    
    return 0;
}

