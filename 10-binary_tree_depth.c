#include "binary_trees.h"

/**
 * binary_tree_size - measures node depth of a binary tree
 * @tree: pointer to the node to measure depth
 *
 * Return: 0, if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}

