#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to tree root
 *
 * Return: 1 if perfect, 0 if tree is not-perfect or NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree))
		{
			if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
				return (1);
		}
	return (0);
}