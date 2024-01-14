#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: if tree is NULL 0 else 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (!tree->right || !tree->left)
		return (0);
	if (tree->right && tree->left)
	{
		if (
		binary_tree_is_perfect(tree->left->left) &&
		binary_tree_is_perfect(tree->left->right) &&
		binary_tree_is_perfect(tree->right->left) &&
		binary_tree_is_perfect(tree->right->right)
		)
		return (1);
	}
	return (0);
}
