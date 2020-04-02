#include <stdio.h>
#include "binaryTree.h"

int main(int nargs, char** args){
	
	binaryTree* tree = newBinaryTree();
	
	for (int i=0; i < 100; ++i)
		add(i, tree);

	node* n = find(51, tree);
	if (n != NULL)
		printf("Value '%d'\n", n->data);
	freeTree(tree);
	
	return 0;
}
