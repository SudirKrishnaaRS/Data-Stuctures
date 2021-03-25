//Sudir krishnaa RS
//LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

// Find the maximum element from the stack

// Input: Stack: 2 | 15 | 12 | 22 | 64 | 54 
// Output: 64

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


void display()
{
    if(top==-1)
    {
        printf("Stack is Empty! No elements to display");
    } 
    
    int max=0;
    for(int i=top;i>=0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    
    printf("%d ",max);
}


int main()
{
    
    int n=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        push();
    }
    display();

    return 0;
}
