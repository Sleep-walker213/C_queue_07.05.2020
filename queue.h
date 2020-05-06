#ifndef __queue__c
#define __queue__c
void create (struct queue **q);
bool empty(struct queue *q);
void push (struct queue**q, int x);
int pop (struct queue**q);
void print (struct queue *q);
#endif