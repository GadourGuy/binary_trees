#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node.
 *
 * Return: 0 or the size of tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	l = tree->left ? binary_tree_size(tree->left) : 0;
	r = tree->right ? binary_tree_size(tree->right) : 0;
	return (l + r + 1);
}
