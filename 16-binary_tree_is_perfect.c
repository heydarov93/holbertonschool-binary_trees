#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((binary_tree_balance(tree) == 0) ? 1 : 0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: ointer to the root node of the tree
 * Return: if tree NULL 0 else balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

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