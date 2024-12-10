#include <stdlib.h>
#include "binary_trees.h"

/**
* print_t - Stores recursively each level in an array of strings
*
* @tree: A pointer to the root node of the tree to print.
* @array: An array of strings where each level of the tree will be stored.
* @height: The height of the tree.
* @level: The current level of the tree being processed.
*
* Return: void
*/
typedef struct binary_tree_s
{
	int n;

	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
