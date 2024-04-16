#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the node with at least 1 child
 * @tree: pointer to root of tree
 *
 * Return: number of nodes, or 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (!tree->left || !tree->right)
		return (1);

	if (tree->left)
		left_leaves = binary_tree_nodes(tree->left);
	if (tree->right)
		right_leaves = binary_tree_nodes(tree->right);

	return (left_leaves + right_leaves + 1);
}
