//Sudir krishnaa RS
// LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

// Delete middle element of a stack

// Input : Stack[] = [1, 2, 3, 4, 5] 
// Output : Stack[] = [1, 2, 4, 5]

#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
int arr[SIZE];
int temp[SIZE];
int top=-1;
int t1=-1;

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


void push_temp(int data)
{
    if(t1>=SIZE)
    {
        printf("Stack is FULL!!");
    }
    else
    {
        t1++;
        temp[t1]=data;
    }
  
}

void display_temp()
{
    
    if(t1==-1)
    {
        printf("Stack is Empty! No elements to display");
    } 
    else
    {
        for(int i=t1;i>=0;i--)
        {
             printf("%d ",temp[i]);
        }
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
        
        for(int i=top;i>=0;i--)
        {
            if(i==mid)
            {
                continue;
            }
            else
            {
                push_temp(arr[i]);
            }
        }
        
        display_temp();
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
