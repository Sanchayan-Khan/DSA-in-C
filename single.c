#include<stdio.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node* head=NULL;
void Insert(int n,int pos)
{
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp1= (struct Node*)malloc(sizeof(struct Node));
    temp1=head;
    temp->data=n;
    if(pos==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    int i;
    for(i=1;i<pos-1;i++)
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}
void delete(int n)
{
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp1= (struct Node*)malloc(sizeof(struct Node));
    temp1=head;
    if(n==1)
    {
        head=temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=1;i<n-1;i++)
    {
        temp1=temp1->next;
    }
    temp=temp1->next;
    temp1->next=temp->next;
    free(temp);
}