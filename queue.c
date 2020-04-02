#include "queue.h"

void resize(queue*);

// Construction //
queue* newQueue() {
	queue* q = malloc(sizeof(queue));
	q->length = q->start = q->end = 0;
	q->arrSize = 8;
	q->data = malloc(sizeof(int*) * q->arrSize);

	return q;
}
void freeQueue(queue* q){
	while (!isEmpty(q))
		free(pop(q));
	free(q->data);
	free(q);
}


// Functions //
int isEmpty(queue* q){
	if (q->length == 0)
		return true;
	return false;
}
int* pop(queue* q){
	if (isEmpty(q))
		return NULL;

    	int* x = q->data[q->start++];
	if (q->start == q->arrSize)
		q->start = 0;
	q->length--;
	return x;
}
void push(queue* q, int* x){
	if (q->length == q->arrSize)
		resize(q);
	q->data[q->end++] = x;
	q->length++;
	if (q->end == q->arrSize)
		q->end = 0;
}

// Helpers //
void resize(queue* q) {
	q->data = realloc(q->data, sizeof(int*) * q->arrSize * 2);
	int j = q->arrSize;
	for(int i = q->end-1; i >= 0; i--){
		q->data[j] = q->data[i];
		j++;
	}
	q->end = j;
	q->arrSize *= 2;
}
