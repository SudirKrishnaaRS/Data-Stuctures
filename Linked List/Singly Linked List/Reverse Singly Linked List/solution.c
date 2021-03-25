//Sudir krishnaa RS
// LinkedIn: https://www.linkedin.com/in/sudirkrishnaars/

//Reverse Singly Linked List

// Input: 7=>1=>2=>1 
// Output: 1=>2=>1=>7

#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};


struct node *p,*head,*old,*temp;

struct node *prev,*current,*nxt;
int create()
{
	int i,nn;
	printf("enter the no of nodes:");
	scanf("%d",&nn);
	printf("enter values:");
	head=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&head->data);
	head->next=NULL;
	old=head;
	for(i=1;i<nn;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->next=NULL;
		old->next=p;
		old=old->next; 
	}
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void reverse()
{
    prev=NULL;
    current=head;
    while(current!=NULL)
    {
        nxt=current->next;
        current->next=prev;
        prev=current;
        current=nxt;
    }
    head=prev;
    
    display();
}


int main()
{
	int ch,a,e,c;
	do
	{
		printf(" LINKED LIST\n");

printf("\nENTER YOUR CHOICE\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
                display();
                break;
            case 3:
                reverse();
                break;
            default:
				printf("ENTER A VALID CHOICE\n");
				
		}
		printf("PRESS 1 TO CONTINUE, 2 TO EXIT\n");
		scanf("%d",&e);
	}while(e==1);
 return 0;
}



