#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree.
 * @tree: a pointer to the root node.
 *
 * Return: 0 or the depth of tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		if (tree->parent)
			depth++;
		tree = tree->parent;
	}
	return (depth);
}
