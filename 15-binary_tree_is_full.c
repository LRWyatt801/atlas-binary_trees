#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to tree
 *
 * Return: 1 if full, 0 if not or tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	if (!tree->right && !tree->left)
		return (1);

	return (0);
}
