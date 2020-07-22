#include "binary_trees.h"

/**
 * binary_tree_postorder - Prints a binary tree in postorder
 * @tree: Tree to print
 * @func: Function to print out
 *
 * Return: Void broski
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
