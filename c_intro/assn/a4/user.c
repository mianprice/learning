#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

int main() {
	/*
	Insert your test code here. Try inserting nodes then searching for them.

	When we grade, we will overwrite your main function with our own sequence of
	insertions and deletions to test your implementation. If you change the
	argument or return types of the binary tree functions, our grading code
	won't work!
	*/

	node *root = NULL;
	root = malloc(sizeof(node));
	printf("helllooooooo");
	insert_node(5,5);

	insert_node(7,7);
	insert_node(3,3);
	insert_node(6,6);
	insert_node(4,4);
	insert_node(2,2);
	insert_node(8,8);

	inorder(root);
	free(root);
	return 0;
}
