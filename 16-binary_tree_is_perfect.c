#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Determines if a binary tree is perfect
 * @tree: Tree to check
 *
 * Return: 1 if full or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (binary_tree_leaves(tree->left) != binary_tree_leaves(tree->right))
		return (0);
	if (binary_tree_leaves(tree->left) % 2 != 0)
		return (0);
	return (1);
}

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
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	num_of_leaves += binary_tree_leaves(tree->right) +
		binary_tree_leaves(tree->left);
	return (num_of_leaves);
}
