#include "binary_trees.h"

/**
 * binary_tree_nodes - Find the number of nodes with a child
 * @tree: The tree to search
 *
 * Return: Number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	num_nodes += 1 + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);
	return (num_nodes);
}
