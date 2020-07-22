#include "binary_trees.h"

/**
 * binary_tree_leaves - Gets leaves from a binary tree
 * @tree: Finds the leaves of a tree
 *
 * Return: Number of leaves or 0 if none
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_of_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL && tree->parent != NULL)
		return (1);
	num_of_leaves += binary_tree_leaves(tree->right) +
		binary_tree_leaves(tree->left);
	return (num_of_leaves);
}
