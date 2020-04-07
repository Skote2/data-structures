/* linkedList.h 
 *
 * This is a singly linked list
 */
#ifndef STDLIB
#define STDLIB
#include <stdlib.h>
#endif

typedef struct node {
	int* data;
	struct node* next;
} node;

typedef struct linkedList {
	node* head, tail;
	int length;
} linkedList;

// Construction //

linkedList* newLinkedList();
void freeLinkedList(linkedList*);


// Functions //

void add (linkedList*, int*);
int* find (linkedList*, int*);
int remove (linkedList*, int*);
