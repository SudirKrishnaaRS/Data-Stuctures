// Singly Linked List - Concat 2 Linked List
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp,*head1,*head2,*nn,*old;

void create1()
{
    int n;
    printf("Enter the number of nodes for Linked List 1 :");
    scanf("%d",&n);
    head1=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&head1->data);
    head1->next=NULL;
    old=head1;
    for(int i=1;i<n;i++)
    {
        nn=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&nn->data);
        nn->next=NULL;
        old->next=nn;
        old=old->next;
        
    }
    
}

void create2()
{
    int n;
    printf("Enter the number of nodes for Linked List 2 :");
    scanf("%d",&n);
    head2=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&head2->data);
    head2->next=NULL;
    old=head2;
    for(int i=1;i<n;i++)
    {
        nn=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&nn->data);
        nn->next=NULL;
        old->next=nn;
        old=old->next;
        
    }
    
}

void display1()
{
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void display2()
{
    temp=head2;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void concat()
{
    temp=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next=head2;
}


int main()
{
    create1();
    // display1();
    create2();
    // display2();
    concat();
    display1();
    

    return 0;
}

// OUPUT:

// Enter the number of nodes for Linked List 1 :3

// 1

// 2

// 3

// Enter the number of nodes for Linked List 2 :3

// 4

// 5

// 6

// 1 2 3 4 5 6 



