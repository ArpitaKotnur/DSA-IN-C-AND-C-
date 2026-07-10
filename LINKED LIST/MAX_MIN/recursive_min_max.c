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
int rmax(struct Node *p)
{
    int max=0;
    if(p==NULL)
    {
        return 0;
    }
    max=rmax(p->next);
    if(max>p->data)
    {
        return max;
    }
    else
    {
        return p->data;
    }
}
int rmin(struct Node *p)
{
    int min=90;
     
    if(p==NULL)
    {
        return 90;
    }
    min=rmin(p->next);
    if(min<p->data)
    {
        return min;
    }
    else
    {
        return p->data;
    }
   
}

int main()
{   int a[]={1,2,32,4,5};
    create(a,5);
    printf("max of all ele is %d\n",rmax(first));
    printf("min of all ele is %d\n",rmin(first)); 

    return 0;
}
