//Sudir krishnaa RS
// LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

// Remove the duplicate elements from a sorted linked list

// Input:- 11->11->11->21->43->43->60 
// Output:- 11->21->43->60

#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp,*head,*nn,*old,*t1,*prev,*nxt;


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
        old=old->next;
        
    }
    
}

void display()
{
    // here we make the repeated elements as -1 
    temp=head;
    while(temp!=NULL)
    {
        t1=temp->next;
        while(t1!=NULL)
        {
            if(temp->data==t1->data)
            {
                t1->data=-1;
            }
            t1=t1->next;
        }
        
        temp=temp->next;
    }
 
    
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data!=-1)
            printf("%d ",temp->data);
            
        temp=temp->next;
    }
    
}


int main()
{
    create();
    display();

    return 0;
}


