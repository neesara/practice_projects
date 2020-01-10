/*Create and traverse a linked list in C */

#include "stdio.h"
#include "stdlib.h"

void main()
{

struct node{

 int val;
 struct node *next;

}*head=NULL,*traverse,*tmp;

int num,i;

printf("Enter the no. of numbers :");
scanf("%d",&num);

printf("Enter the numbers :");
for (i=0;i<num;i++)
{

tmp=( struct node*) malloc(sizeof(struct node));
scanf("%d",&tmp->val);
tmp->next=NULL;

if (head == NULL)
{
  traverse=tmp;
  head=tmp;
}
else
{
traverse->next=tmp;
traverse=traverse->next;
}
}

traverse=head;
while(traverse != NULL)
{

printf("%d\t",traverse->val);
traverse=traverse->next;
}


}
