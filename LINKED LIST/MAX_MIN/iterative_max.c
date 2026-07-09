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
int max(struct Node *p)
{
    int max=0;
    while(p)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}


int main()
{   int a[]={1,2,32,4,5};
    create(a,5);
    printf("max of all ele is %d\n",max(first));

    return 0;
}
