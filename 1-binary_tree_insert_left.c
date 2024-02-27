#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return:  a pointer to the created node, or NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (parent == NULL || new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	if (parent->left != NULL)
	{
		new->left = parent->left;
		(parent->left)->parent = new;
	}
	parent->left = new;
	new->parent = parent;
	return (new);
}
