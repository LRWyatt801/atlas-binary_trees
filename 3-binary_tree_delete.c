#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire tree
 * @tree: pointer to root of tree
 *
 * Return: n/a
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
