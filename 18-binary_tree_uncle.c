#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a binary tree node
 * @node: Node to test
 *
 * Return: Uncle of NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Finds the sibling of a binary tree
 * @node: Node to find sibling of
 *
 * Return: The sibling or if none, NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *up;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	up = node->parent;
	if (up->left != NULL && up->left != node)
		return (up->left);
	if (up->right != NULL && up->right != node)
		return (up->right);
	return (NULL);
}
