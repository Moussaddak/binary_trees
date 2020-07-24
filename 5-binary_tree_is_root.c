#include "binary_trees.h"
/**
 * binary_tree_is_root - binary_tree_is_root
 * @node: binary_tree_t
 * Return: int
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	else if (!node->parent)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
