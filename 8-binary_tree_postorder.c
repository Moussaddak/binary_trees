#include "binary_trees.h"
/**
 * binary_tree_postorder - display a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a function to call for each node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		if (tree->left)
		{
			binary_tree_postorder(tree->left, func);
		}
		if (tree->right)
		{
			binary_tree_postorder(tree->right, func);
		}
		func(tree->n);
	}
}
