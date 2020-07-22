#include "binary_trees.h"

/**
 * binary_tree_depth - Finds the depth of the current node
 * @tree: Node to check
 *
 * Return: Depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num = 1;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		num += binary_tree_depth(tree->parent);
	else
		num = 0;
	return (num);
}
