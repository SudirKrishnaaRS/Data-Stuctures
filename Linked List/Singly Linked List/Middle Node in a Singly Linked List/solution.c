// Middle Node in a Singly Linked List
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
    int tot_cnt=0;
    temp=head;
    while(temp!=NULL)
    {
        tot_cnt++;
        temp=temp->next;
    }
    
    int mid_pos=tot_cnt/2;
    temp=head;
    for(int i=0;i<mid_pos;i++)
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

