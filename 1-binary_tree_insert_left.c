#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node to the left
 * @parent: Parent of the node
 * @value: Value of the new node
 *
 * Return: The node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		return (new_node);
	}
	parent->left->parent = new_node;
	new_node->left = parent->left;
	parent->left = new_node;
	new_node->parent = parent;
	return (new_node);
}
