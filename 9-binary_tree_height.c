#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: a pointer to the root node.
 *
 * Return: 0 or the height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	while (tree != NULL)
	{
		if (tree->left != NULL)
		{
			height++;
			tree = tree->left;
		}
		else if (tree->right != NULL && tree->left == NULL)
		{
			height++;
			tree = tree->right;
		}
		else
			break;
	}
	return (height);
}
