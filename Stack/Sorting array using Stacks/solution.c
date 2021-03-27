//Sudir krishnaa RS
//sudirkrish17@gmail.com

// Sorting array using Stacks

// Input : 8 5 7 1 9 12 10 
// Output : 1 5 7 8 9 10 12

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

void sort()
{
    if(top==-1)
    {
        printf("Stack is Empty! No elements to display");
    } 
    else
    {
        for(int i=top;i>0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                int temp=0;
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        
        
    }
 
}


void display()
{
    if(top==-1)
    {
        printf("Stack is Empty! No elements to display");
    } 
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d ",arr[i]);
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
    printf("Before Sorting:");
    display();
    printf("\nAfter Sorting:");
    sort();
    display();

    return 0;
}

