#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (find_height(tree) - 1);
}

/**
 * find_height - finds the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */

int find_height(const binary_tree_t *tree)
{
	int h_right = 0, h_left = 0;

	if (!tree)
		return (0);
	h_left = find_height(tree->left);
	h_right = find_height(tree->right);
	return ((h_left > h_right) ? h_left + 1 : h_right + 1);
}

