#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree in pre order.
 * @tree: tree to be gone through
 * @func: is a pointer to a function to call for each node.
 * Return: void function
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
