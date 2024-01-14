#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node, otherwise NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node ? node->parent : NULL;

	if (!node || !parent || !(parent->left && parent->right))
		return (NULL);

	return (parent->left == node ? parent->right : parent->left);
}
