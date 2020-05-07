#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"
int main()
{
    int x;
    struct queue *q;
    create(&q);
    while ((scanf("%d", &x)!=0) && (x!='.'))
    push(&q, x);
    pop(&q);
    print(q);
    push(&q, 10);
    print(q);
    clear(&q);
    push(&q, 10);
    print(q);
    return 0;
}
