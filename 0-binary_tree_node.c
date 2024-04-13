#include "binary_trees.h"

/**
 * binary_tree_node - creates a node for a binary tree
 * @parent: pointer to parent node
 * @value: value to asign to nod
 *
 * Return: pointer to new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = newNode->right = NULL;
	return (newNode);	
}