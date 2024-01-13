#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: if tree is NULL 0 else count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->right != NULL ? tree->left != NULL ? 2 : 1 : 1);
}
