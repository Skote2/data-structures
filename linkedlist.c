#include "linkedList.h"

//////////////////
// Construction //
//////////////////

// newLinkedList - constructor
linkedList* newLinkedList(){
	// params:	none
	// returns:	a pointer to an instantiated singly linked list

	linkedList* sll = malloc(sizeof(linkedList));
	sll->head = NULL;
	sll->length = 0;
	return sll;
}

// freeLinkedList - frees the contents of passed singly linked list, then frees the list itself
void freeLinkedList(linkedList* sll){
	// params:	sll - singly linked list to be freed
	// returns:	void
	node* n, c = sll->head;
	while (c != NULL){
		n = c->next;
		free(c->data);
		free(c);
		c = n;
	}
	free(sll);
}


///////////////
// Functions //
///////////////

// add - adds int pointer 'x' to the end of singly linked list 'sll'
void add (linkedList* sll, int* x){
	// params:	sll - singly linked list to add item to, x - item to add to sll
	// returns:	none
	
}
// find - searches list 'sll' for pointer 'x'
int* find (linkedList* sll, int* x){
	// params:	sll - singly linked list to search, x - pointer to search for
	// returns:	x if it exists in the list, NULL if not found

}
// remove - searches list 'sll' for item 'x' and if found removes it from the list
int remove (linkedList* sll, int* x){
	// params:	sll - list to search/remove from, x - item to remove
	// returns:	bool - true if item found and removed, false if item not found in list
	
}
