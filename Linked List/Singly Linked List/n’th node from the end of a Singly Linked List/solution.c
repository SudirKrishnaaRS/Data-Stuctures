//Sudir krishnaa RS
//LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

// n’th node from the end of a Singly Linked List
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node *head,*nn,*old,*temp;

void create()
{
    int n=0;
    printf("Enter the number of nodes:");
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
    int pos=0,len=0;
    
    //here we find the total count of nodes 
    temp=head;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    printf("Enter the pos to be found from last :");
    scanf("%d",&pos);
    int res_pos=len-pos;
    
//as we traversed the temp to last in above to find count so we reassign the temp again to head i.e)first position
    temp=head;
    for(int i=0;i<res_pos;i++)
    {
        temp=temp->next;
    }
    printf("%d",temp->data);
}

int main()
{
    create();
    display();

    return 0;
}

