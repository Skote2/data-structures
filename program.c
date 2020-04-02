#include <stdio.h>
#include "binaryTree.h"

int main(int nargs, char** args){
	
	//binaryTree* tree = newBinaryTree();
	
	queue* q = newQueue();
	for (int i = 0; i < 16; ++i)
		push(q, (int*)newNode(i));
	node* n;
	for (int i = 0; i < 8; ++i) {
		n = (node*)pop(q);
		free(n);
		push(q, (int*)newNode(i));
	}
	for (int i = 0; i < 16; ++i){
		printf("queue start: %d", q->start);
		n = (node*)pop(q);
		printf ("poped value: %d, queue start: %d, queue size: %d\n", n->data, q->start, q->arrSize);
		free(n);
	}
	freeQueue(q);

	//node* n = (node*)pop(q);//find(51, tree);
	//if (n != NULL)
	//	printf("Value '%d'\n", q->arrSize);
	//freeTree(tree);
	
	return 0;
}
