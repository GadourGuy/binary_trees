#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree in pre order.
 * @tree: tree to be gone through
 * @func: is a pointer to a function to call for each node.
 * Return: void function
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL && !func)
	return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
