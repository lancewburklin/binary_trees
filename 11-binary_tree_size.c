#include "binary_trees.h"

/**
 * binary_tree_size - Finds the size of a binary tree
 * @tree: The tree to find the size of
 *
 * Return: The size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num = 1;

	if (tree == NULL)
		return (0);

	num += binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (num);
}
