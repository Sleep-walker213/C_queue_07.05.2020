#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
struct node{
    int elem;
    struct node * next;
};

struct queue{
    struct node *f, *l;
};

void create (struct queue **q)
{
    (*q)=malloc(sizeof(struct queue));
    (*q)->f=NULL;
    (*q)->l=NULL;
}

bool empty(struct queue *q)
{
    return (q->f==NULL);
}

void push (struct queue**q, int x)
{
    struct node *p;
    p=malloc(sizeof(struct node));
    p->elem=x;
    p->next=NULL;
    if (empty(*q)) (*q)->f=p;
    else
    {
        (*q)->l->next=p;
    }
    (*q)->l=p;
}

int pop (struct queue**q)
{
    if (empty(*q)) exit(1);
    struct node *p;
    p=(*q)->f;
    int x;
    x=p->elem;
    (*q)->f=p->next;
    free(p);
    if ((*q)->f==NULL) ((*q)->l=NULL);
    return x;
}

void print (struct queue *q)
{
    struct node *p;
    p=q->f;
    while (p!=NULL)
    {
        printf("%d ",p->elem);
        p=p->next;
    }
    putchar('\n');
}

void clear(struct queue**q)
{
    if (empty(*q)) exit(0);
        while(!empty(*q))
        {
            pop(q);
        }
}
