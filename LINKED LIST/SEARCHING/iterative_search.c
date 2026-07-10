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
{
    while(p!=NULL)
    {
        if(p->data==key)
            return p;
        p=p->next;
    }
    return NULL;
}

int main()
{   int a[]={1,2,32,4,5};
    create(a,5);
    struct Node *res;
    res=Lsearch(first,9);
    if(res!=NULL)
    {
        printf("key %d is found",res->data);
    }
    else
    {
        printf("Key is not found");
    }
    return 0;
}
