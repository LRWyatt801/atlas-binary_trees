#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a tree in order
 * @tree: pointer to root of tree
 * @func: function to do on each node
 *
 * Return: n/a
*/

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
