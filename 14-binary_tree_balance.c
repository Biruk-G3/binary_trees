#include "binary_trees.h"

/**
 * binary_tree_balance- function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	/* B.F = height(left_child) - height(right_child) */
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height- function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	left_height = 0;
	right_height = 0;
	if (tree == NULL)
	{
		return (0);
	}

	left_height = 1 + binary_tree_height(tree->left);
	right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}
