#include "binary_trees.h"
size_t Calcul_size(binary_tree_t *node, size_t size);
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	binary_tree_t *node;

	node = (binary_tree_t *)tree;
	size = Calcul_size(node, size);
	return (size);
}
/**
 * Calcul_size - calculate number of nodes of a tree
 * @node: a pointer to the node
 * @size: number of nodes
 * Return: size tree
 */
size_t Calcul_size(binary_tree_t *node, size_t size)
{

	if (node)
	{
		if (node->left)
		{
			size = Calcul_size(node->left, size);
		}
		if (node->right)
		{
			size = Calcul_size(node->right, size);
		}
		size++;
	}
	return (size);
}
