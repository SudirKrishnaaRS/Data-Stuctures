//Sudir krishnaa RS
// LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

//Merge alternate nodes of two single linked lists which is of equal lengths
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *p,*head,*old,*p1,*head1,*old1,*q,*s;

void create()
{
    int i,n;
    printf("No of first nodes: ");
    scanf("%d",&n);
    head = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&head->data);
    head->next=NULL;
    old=head;
    for(i=1;i<n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        old->next = p;
        old=old->next;
    }
}

void create1()
{
    int i,n1;
    printf("No of second nodes: ");
    scanf("%d",&n1);
    head1 = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&head1->data);
    head1->next=NULL;
    old1=head1;
    for(i=1;i<n1;i++)
    {
        p1=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p1->data);
        p1->next=NULL;
        old1->next=p1;
        old1=old1->next;
    }
}

void display()  
{  
    struct node *p = head;
    while (p != NULL)  
    {  
        printf("%d\t", p->data);  
        p = p->next;  
    } 
    printf("\n");
}

void merge_lst(struct node *head,struct node *head1)
{
    p = head;
    q = head1;
    while(p!=NULL && q!=NULL)
    {
        s=p->next;
        p->next=q;
        p=s;
        s=q->next;
        q->next=p;
        q=s;
    }

}

void main()  
{  
    create();
    create1();
    merge_lst(head,head1);
    display();
}



