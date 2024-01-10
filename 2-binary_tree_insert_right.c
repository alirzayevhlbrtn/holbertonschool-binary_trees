#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert new node to right of parent
 * @parent: parent node
 * @value: int for node
 * Return: newnode pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}

	parent->right = newnode;

	return (newnode);
}
