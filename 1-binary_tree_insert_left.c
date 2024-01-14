#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child
 * of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}

	parent->left = node;

	return (node);
}
