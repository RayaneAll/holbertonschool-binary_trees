#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Creates a new binary tree node
*
* @parent: Pointer to the parent node of the new node
* @value: Value to store in the new node
*
* Return: Pointer to the newly created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
