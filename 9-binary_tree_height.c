#include "binary_trees.h"
int Is_leaf(binary_tree_t *node);
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the node of the tree to measure the height
 * Return:  the height of a binary tree
 *
 */
size_t binary_tree_height(binary_tree_t *tree)
{

	size_t left_height = 0, right_height = 0;

	if (!tree || Is_leaf(tree))
	{
		return (0);
	}
	left_height = binary_tree_height(tree->right) + 1;
	right_height = binary_tree_height(tree->left) + 1;

	return (MAX(left_height, right_height));

}
/**
 * Is_leaf - check if node a leaf
 * @node: pointer to node
 * Return: 0 (not leaf) or 1 (is leaf)
 */
int Is_leaf(binary_tree_t *node)
{
	if (!node->left && !node->right && node != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
