#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree in postorder
 * @tree: pointer to root of tree
 * @func: function to perform on each node
 *
 * Return: n/a
*/

void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
