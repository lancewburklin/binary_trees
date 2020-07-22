#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node to the right
 * @parent: Parent of the node
 * @value: Value of the new node
 *
 * Return: The node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
		return (new_node);
	}
	parent->right->parent = new_node;
	new_node->right = parent->right;
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}
