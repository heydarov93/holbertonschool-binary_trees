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
	return (find_height(tree));
}

/**
 * find_height - finds the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: void
 */
int find_height(const binary_tree_t *tree)
{
	int height = 0;

	while (tree->left || tree->right)
	{
		height++;
		if (tree->left)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (height);
}
