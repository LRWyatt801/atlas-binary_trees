#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root of tree
 *
 * Return: height of tree, 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	if (!tree->left)
		return (height_l);

	if (!tree->right)
		return (height_r);

	if (tree->left)
		height_l = binary_tree_height(tree->left);

	if (tree->right)
		height_r = binary_tree_height(tree->right);

	if (height_l > height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}
