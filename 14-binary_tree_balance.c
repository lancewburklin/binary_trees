#include "binary_trees.h"

/**
 * binary_tree_balance - Gets the balance of a binary tree
 * @tree: Tree to work with
 *
 * Return: The balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 1;
	int bal_right = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		bal += binary_tree_balance(tree->left);
	else
		bal = 0;
	if (tree->right != NULL)
		bal_right += binary_tree_balance(tree->right);
	else
		bal_right = 0;
	return (bal - bal_right);
}
