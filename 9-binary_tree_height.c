#include "binary_trees.h"

/**
 * binary_tree_height - Finds the height of a binary tree at a node
 * @tree: Tree to find the height of
 *
 * Return: The height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t num = 0;
	size_t num_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		num = 1 + binary_tree_height(tree->left);
	else
		num = 0;
	if (tree->right)
		num_right = 1 + binary_tree_height(tree->right);
	else
		num_right = 0;
	if (num > num_right)
		return (num);
	return (num_right);
}
