#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	return (binary_tree_leaves(tree->left) == binary_tree_leaves(tree->right));
}
