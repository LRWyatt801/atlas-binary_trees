#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to root node of tree
 *
 * Return: balance factor, or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_l = 1 + binary_tree_balance(tree->left);

	if (tree->right)
		height_r = 1 + binary_tree_balance(tree->right);
	
	return (height_l - height_r);
}