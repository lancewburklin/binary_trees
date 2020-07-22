#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: The tree being deleted
 *
 * Return: Void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree != NULL)
		free(tree);
}
