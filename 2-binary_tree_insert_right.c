#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - Creates a new binary tree node
*
* @parent: Pointer to the parent node of the new node
* @value: Value to store in the new node
*
* Return: Pointer to the newly created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
