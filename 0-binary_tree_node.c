#include "binary_trees.h"
/**
 * binary_tree_node - create new node
 * @parent: praent node
 * @value: value of node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	return (newnode);
}
