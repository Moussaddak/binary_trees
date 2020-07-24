#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent address of new node
 * @value: int value to be stored in the node
 * Return: return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	if (!parent)
	{
		new_node->parent = NULL;
	}
	else
	{
		new_node->parent = parent;
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
