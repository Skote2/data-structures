/* queue.h */
#ifndef STDLIB
#define STDLIB
#include <stdlib.h>
#endif

#define true  1
#define false 0

typedef struct queue {
	int** data;
	int arrSize;
	int length; // number of items in the queue
	int start;
	int end;
} queue;

// Construction //
queue* newQueue();
void freeQueue(queue*);

// Functions //
int isEmpty(queue*);
int* pop(queue*);
void push(queue*, int*);
