#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: if tree is NULL 0 else 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
		return (1);
	return (0);
}
