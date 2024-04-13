#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a tree
 * @tree: pointer to the root of a tree
 *
 * Return: size of tree, or 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l = 0, size_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		size_l = binary_tree_size(tree->left);
	if (tree->right)
		size_r = binary_tree_size(tree->right);
	return (size_l + size_r + 1);
}
