#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
int arr[SIZE];
int top=-1;
void push()
{
    if(top>=SIZE)
    {
        printf("Stack is FULL!!");
    }
    else
    {
        top++;
        int data=0;
        printf("Enter the data:");
        scanf("%d",&data);
        arr[top]=data;
    }
  
}


void display(int n)
{
    if(top==-1)
    {
        printf("Stack is Empty! No elements to display");
    } 
    else
    {
        int mid=0;
        if(n%2==0)
        {
            mid=(n/2)-1;
        }
        else
        {
            mid=(n/2);
        }
        
        for(int i=0;i<=top;i++)
        {
            if(i==mid)
            {
                continue;
            }
            else
            {
                printf("%d ",arr[i]);
            }
        }
    }
    
}


int main()
{
    
    int n=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        push();
    }
    display(n);

    return 0;
}
