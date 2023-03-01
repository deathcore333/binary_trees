#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binarytree
 * @tree: pointer to the root node
 *
 * Return: 0, if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	count_leaves += binary_tree_leaves(tree->left);
	count_leaves += binary_tree_leaves(tree->right);

	return (count_leaves);
}
