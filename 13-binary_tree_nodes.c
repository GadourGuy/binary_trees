#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes in a tree
 * @tree: tree to be counted
 *
 * Return: returns the number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			size++;
		size += binary_tree_nodes(tree->left);
		size += binary_tree_nodes(tree->right);
		return (size);
	}
	return (0);
}
