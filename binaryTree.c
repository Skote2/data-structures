#include "binaryTree.h"

// Constructors //

binaryTree* newBinaryTree() {
	binaryTree* tree = malloc(sizeof(binaryTree));
	tree->head = NULL;
	return tree;
}
void freeTree(binaryTree* tree) {
	queue* nodes = newQueue();
	node* curNode;
	push(nodes, (int*)tree->head);
	while ((curNode = (node*)pop(nodes)) != NULL){
		if (curNode->left != NULL)
			push(nodes, (int*)curNode->left);
		if (curNode->right != NULL)
			push(nodes, (int*)curNode->right);
		free(curNode);
	}
	freeQueue(nodes);
	free(tree);
}

node* newNode(int data) {
	node* n = malloc(sizeof(node));
	n->left = n->right = NULL;
	n->data = data;
	return n;
}


/////////////
//Functions//
/////////////

void add (int newData, binaryTree* tree){
	node* n = newNode(newData);

	if (tree->head == NULL)
		tree->head = n;
	else {
		node* curNode = tree->head;
		while (true) {
			if (curNode->data > newData){
				if(curNode->left == NULL){
					curNode->left = n;
					break;
				}
				else
					curNode = curNode->left;
			} else {
				if(curNode->right == NULL){
					curNode->right = n;
					break;
				}
				else
					curNode = curNode->right;
			}
		}
	}
}

node* find (int x, binaryTree* tree){
	node* curNode = tree->head;
	while(true){
		if (curNode == NULL)
			return NULL;
		if (curNode->data == x)
			return curNode;
		if (curNode->data > x)
			curNode = curNode->left;
		else
			curNode = curNode->right;
	}
}
