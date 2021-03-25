//Sudir krishnaa RS
//LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

//Implement 2 stacks using one array 

#include <stdio.h>
#include<stdlib.h>

#define SIZE 10

int arr[SIZE];
int top1=-1;
int top2=SIZE;

void push_stack1()
{
    int data=0;
    printf("Enter the data to insert into Stack1:");
    scanf("%d",&data);
    if(top1 < top2-1)
    {
        top1++;
        arr[top1]=data;
    }
    else
    {
        printf("Stack 1 is FULL!!\n");
    }
}

void push_stack2()
{
    int data=0;
    printf("Enter the data to insert into Stack2:");
    scanf("%d",&data);
    if(top1 < top2-1)
    {
        top2--;
        arr[top2]=data;
    }
    else
    {
        printf("Stack 2 is FULL!!\n");
    }
}

void pop_stack1()
{
    if(top1>=0)
    {
        int popped_out_dataStack1=arr[top1];
        printf("%d - ( Stack 1 )\n ",popped_out_dataStack1);
        top1--;
    }
    else
    {
        printf("Stack 1 is EMPTY!!\n");
    }
}

void pop_stack2()
{
    if(top2<SIZE)
    {
        int popped_out_dataStack2=arr[top2];
        printf("%d - ( Stack 2 )\n ",popped_out_dataStack2);
        top2++;
    }
    else
    {
        printf("Stack 1 is EMPTY!!\n");
    }

}

void print_stack1()
{
    printf("Stack 1 elements are : ");
    for(int i=top1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void print_stack2()
{
    printf("Stack 2 elements are : ");
    for(int i=top2;i<SIZE;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    // int ch=1;
    // while(ch==1)
    // {
    //     int choice=0,a=0,b=0;
    //     printf("Enter 1 - Push into Stack1 \n 2 - Push into Stack2 \n 3 - Pop from Stack1 \n 4 - Pop from Stack2 \n 5 - Display Stack1 \n 6 - Display Stack2 \n");
    //     scanf("%d",&choice);
    //     switch(choice)
    //     {
    //         case 1:
    //             printf("Enter the data to insert into Stack1:");
    //             scanf("%d",&a);
    //             push_stack1(a);
    //             break;
    //         case 2:
    //             printf("Enter the data to insert into Stack2:");
    //             scanf("%d",&b);
    //             push_stack1(b);
    //             break;
    //         case 3:
    //             pop_stack1();
    //             break;
    //         case 4:
    //             pop_stack2();
    //             break;
    //         case 5:
    //             print_stack1();
    //             break;
    //         case 6:
    //             print_stack2();
    //             break;
    //         default:
    //             printf("Enter a valid choice!!");
            
            
    //     }
    //     printf("Enter 1 to continue else anyother to EXIT");
    //     scanf("%d",&ch);
        
    // }
    
    push_stack1();
    push_stack1();
    push_stack2();
    push_stack2();
    print_stack1();
    print_stack2();
    pop_stack1();
    pop_stack2();
    // push_stack1();
    // push_stack2();
    print_stack1();
    print_stack2();
    

    return 0;
}


