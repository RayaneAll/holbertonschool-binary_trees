#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure the balance factor
*
* Return: Balance factor or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? (int)binary_tree_height(tree->left) : 0;
	right_height = tree->right ? (int)binary_tree_height(tree->right) : 0;

	return (left_height - right_height);
}
