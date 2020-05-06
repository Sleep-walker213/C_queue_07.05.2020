#ifndef __queue__h
#define __queue__h
void create (struct queue **q);
bool empty(struct queue *q);
void push (struct queue**q, int x);
int pop (struct queue**q);
void print (struct queue *q);
#endif