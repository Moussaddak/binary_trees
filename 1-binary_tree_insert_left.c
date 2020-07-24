#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent address of new node
 * @value: int value to be stored in the node
 * Return: return a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node =  malloc(sizeof(binary_tree_t));
	if (!(new_node && parent))
	{
		return (NULL);
	}
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}
	parent->left = new_node;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
