#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in binary tree
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 * parent is NULL, or node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	binary_tree_t *parent = node->parent;

	if (parent->left == NULL || parent->right == NULL)
		return (NULL);

	if (node == parent->left)
		return (parent->right);
	else
		return (parent->left);
}
