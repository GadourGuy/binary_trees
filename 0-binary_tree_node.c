#include "binary_trees.h"

/**
 * binary_tree_node - a Function that creates a binary tree node
 * @parent: parent node.
 * @value: value of the node.
 *
 * Return: returns a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}

