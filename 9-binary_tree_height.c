#include "binary_trees.h"

/**
 * binary_tree_height - function to determine the height of binary tree
 * @tree: pointer to the root
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree || (!tree->right && !tree->left))
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);


	return (1 + (left_h >= right_h ? left_h : right_h));
}

