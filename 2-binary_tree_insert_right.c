#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of parent node
 * @parent: parent node.
 * @value: value of child node.
 *
 * Return: a pointer to the created node, or NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		(parent->right)->parent = new;
	}
	parent->right = new;
	return (new);
}
