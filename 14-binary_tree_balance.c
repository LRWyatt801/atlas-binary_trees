#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to root node of tree
 *
 * Return: balance factor, or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	
	return (height_l - height_r);
}