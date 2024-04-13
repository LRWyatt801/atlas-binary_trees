#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to right child
 * @parent: pointer to the node to insert the right-child
 * @value: value for node
 *
 * Return: pointer to created node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	if (!parent->right)
		parent->right = binary_tree_node(parent, value);
	else
	{
		tmp = parent->right;
		parent->right = binary_tree_node(parent, value);
		tmp->parent = parent->right;
		parent->right->right = tmp;
	}
	return (parent->right);
}
