//Sudir krishnaa RS
//sudirkrish17@gmail.com
//LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

// Sum and Product of the nodes of a Circular Singly Linked List which are divisible by K

// Input:- 5->6->7->8->9->10->11->11  K=11 
// Output:- Sum = 22 Product = 121
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp,*head,*nn,*old;


void create()
{
    int n;
    printf("Enter the number of nodes :");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&head->data);
    head->next=NULL;
    old=head;
    for(int i=1;i<n;i++)
    {
        nn=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&nn->data);
        nn->next=NULL;
        old->next=nn;
        nn->next=head;  // only this line changes for circular Linked list creation
        old=old->next;
        
    }
    
}

void display()
{
    int k=0,sum=0,product=1;
    printf("Enter the k value :");
    scanf("%d",&k);
    temp=head;
    do                          // only this line changes for circular Linked list display
    {
        if(temp->data % k==0)
        {
            sum+=temp->data;
            product*=temp->data;
        }
        
        temp=temp->next;
    }while(temp!=head);        // only this line changes for circular Linked list display
    
    printf("Sum=%d Product=%d",sum,product);
}


int main()
{
    create();
    display();

    return 0;
}

