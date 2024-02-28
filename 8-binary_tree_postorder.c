#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree in pre order.
 * @tree: tree to be gone through
 * @func: is a pointer to a function to call for each node.
 * Return: void function
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
