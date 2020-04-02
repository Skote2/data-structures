/* binaryTree.h */
#ifndef STDLIB
#define STDLIB
#include <stdlib.h>
#endif

#include "queue.h"

typedef struct Node {
	int data;
	struct node* left;
	struct node* right;
} node;

typedef struct BinaryTree {
	node* head;
} binaryTree;

// Constructors //

binaryTree* newBinaryTree();
void freeTree(binaryTree*);
node* newNode(int);

// Functions //

void add (int, binaryTree*);
node* find (int, binaryTree*);
