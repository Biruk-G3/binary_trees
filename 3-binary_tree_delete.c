#include "binary_trees.h"
/**
 * binary_tree_delete- a function that deletes an entire binary tree.
 * @tree: tree to be deleted.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree != NULL)
	{
		temp = tree;
		if (temp == NULL)
		{
			return;
		}

		binary_tree_delete(temp->left);
		binary_tree_delete(temp->right);
		free(temp);
	}
}
