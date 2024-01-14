#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	left = binary_tree_is_perfect(tree->left->left) +
		binary_tree_is_perfect(tree->left->right);
	right = binary_tree_is_perfect(tree->right->right) +
		binary_tree_is_perfect(tree->right->left);
	if (1 + left == 1 + right && left && right)
	{
		return (1);
	}
	return (0);
}

