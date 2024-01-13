#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_insert_right -  inserts a node as the right-child
 * of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to put in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}

	parent->right = node;

	return (node);
}
