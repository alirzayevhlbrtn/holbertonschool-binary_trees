#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is leaf or not
 * @node: pointer to node for check
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
