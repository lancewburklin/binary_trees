#include "binary_trees.h"

/**
 * binary_tree_is_full - Tests if a binary tree is full
 * @tree: The tree to test
 *
 * Return 1 if full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}
	return (0);
}
