#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to find it's sibling
 *
 * Return: sibling of a node or NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	binary_tree_t *tmp = node->parent;

	if (tmp->left == node)
		return (tmp->right);
	else
		return (tmp->left);
	return (NULL);
}
