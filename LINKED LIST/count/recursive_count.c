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
int count(struct Node *p)
{   if(p!=NULL){
    return count(p->next)+1;
    }
    return 0;
}
int main()
{   int a[]={3,4,5,6,7};
    create(a,5);
    printf("number of node are %d\n",count(first));

    return 0;
}
