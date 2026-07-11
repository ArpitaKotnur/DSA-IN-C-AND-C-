#include<stdlib.h>
#include<stdio.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *first=NULL;
struct Node * create(int data)
{
    struct Node *temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void insert_end(struct Node *p,int data)
{   struct Node *temp,*prev;
    temp=create(data);
    if(p==NULL)
    {   
        first=temp;
    }
    else
    {
        while(p!=NULL)
        {   prev=p;
            p=p->next;
        }
        
        prev->next=temp;
    }
}
int main()
{   int data;
    while(1)
    {
        printf("\nenter the data\n");
        scanf("%d",&data);
        insert_end(first,data);
        display(first);
    }
}
