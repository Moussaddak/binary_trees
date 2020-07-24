#include "binary_trees.h"
void Count_nodes(binary_tree_t *node, size_t *n);
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of
 * Return: number of nodes with at leasrt 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t number = 0;
	binary_tree_t *node;

	node = (binary_tree_t *)tree;
	Count_nodes(node, &number);
	return (number);
}
/**
 * Count_nodes - calculate number of nodes with at leasrt 1 child
 * @node: a pointer to the node
 * @n: number of nodes
 * Return: size tree
 */
void Count_nodes(binary_tree_t *node, size_t *n)
{

	if (node)
	{
		if (node->left || node->right)
		{
			*n = (*n) + 1;
		}
		Count_nodes(node->left, n);
		Count_nodes(node->right, n);
	}
}
