#ifndef __QUEUE_H__
#define __QUEUE_H__
struct node{
    int elem;
    struct node * next;
};

struct queue{
    struct node *f, *l;
};
void create (struct queue **q);
bool empty(struct queue *q);
void push (struct queue**q, int x);
int pop (struct queue**q);
void print (struct queue *q);
void clear(struct queue**q);
#endif
