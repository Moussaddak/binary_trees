#include "binary_trees.h"
int Is_leaf(binary_tree_t *node);
size_t Calcul_leaves(binary_tree_t *node, size_t number);
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: size_t
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number = 0;
	binary_tree_t *node;

	node = (binary_tree_t *)tree;
	number = Calcul_leaves(node, number);
	return (number);
}
/**
 * Calcul_leaves - calculate number of nodes of a tree
 * @node: a pointer to the node
 * @number: number of nodes
 * Return: size tree
 */
size_t Calcul_leaves(binary_tree_t *node, size_t number)
{

	if (node)
	{
		if (node->left)
		{
			number = Calcul_leaves(node->left, number);
		}
		if (node->right)
		{
			number = Calcul_leaves(node->right, number);
		}
		if (Is_leaf(node))
		{
			number++;
		}
	}
	return (number);
}
/**
 * Is_leaf - check if node a leaf
 * @node: pointer to node
 * Return: 0 (not leaf) or 1 (is leaf)
 */
int Is_leaf(binary_tree_t *node)
{
	if (!node->left && !node->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
