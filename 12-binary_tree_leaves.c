#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is leaf or not
 * @node: node to be checked
 *
 * Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}


/**
 * binary_tree_leaves - counts the leaves of a tree
 * @tree: tree to be counted
 *
 * Return: size of tree.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		if (binary_tree_is_leaf(tree))
			size++;
		size += binary_tree_leaves(tree->left);
		size += binary_tree_leaves(tree->right);
		return (size);
	}
	return (0);
}
