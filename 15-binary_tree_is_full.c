#include "binary_trees.h"

/**
 * is_full_recursive - checks if tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 0, if tree is NULL
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}


/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to the root node
 *
 * Return: 0, if tree is NULL or not full
 *		1, otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
