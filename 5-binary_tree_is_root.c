#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to check
 *
 * Return: 1, if node is root
 *	    0, Otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
