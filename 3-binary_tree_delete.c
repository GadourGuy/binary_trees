#include "binary_trees.h"

/**
 * binary_tree_delete - delets a tree.
 * @tree: tree to be deleted
 *
 * Return: Void function.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_t *tmp;

	tmp = tree;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tmp);
}
