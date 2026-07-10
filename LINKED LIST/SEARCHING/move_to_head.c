#include<stdlib.h>
#include <stdio.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
void create(int a[],int n)
{   struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    
}
struct Node * Lsearch(struct Node *p, int key)
{   struct Node *q=NULL;
    while(p!=NULL)
    {
        if(p->data==key)
        {   q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}

int main()
{   int a[]={1,2,32,4,5};
    create(a,5);
    struct Node *res;
    res=Lsearch(first,32);
    if(res!=NULL)
    {
        printf("key %d is found\n",res->data);
    }
    else
    {
        printf("Key is not found\n");
    }
    printf("move to head is as follow:\n");
    display(first);
    return 0;
}
