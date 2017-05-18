#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "bintree.h"

///*** DO NOT CHANGE ANY FUNCTION DEFINITIONS ***///

// Recall node is defined in the header file
node *root = NULL;

void inorder(struct node *n) {
	if (n != NULL) {
		inorder(n->left);
		printf("%d \n", n->data);
		inorder(n->right);
	}
}

// Insert a new node into the binary tree with node_id and data
void insert_node(int node_id, int data) {
	node *new_node = (node *)malloc(sizeof(node));
	new_node->node_id = node_id;
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	if (root == NULL) {
		root = (node *)malloc(sizeof(node));
		root = new_node;
	} else {
		node *current = root;
		find_empty:
		if (node_id > current->node_id) {
			if (current->right != NULL) {
				current = current->right;
				goto find_empty;
			} else {
				current->right = new_node;
			}
		} else {
			if (current-> left != NULL) {
				current = current->left;
				goto find_empty;
			} else {
				current->left = new_node;
			}
		}
	}
}

// Find the node with node_id, and return its data
int find_node_data(int node_id) {
	return 0;
}

///***** OPTIONAL: Challenge yourself w/ deletion if you want ***///
//Find and remove a node in the binary tree with node_id. 
//Children nodes are fixed appropriately.
void remove_node(int node_id) {
	return;
}

