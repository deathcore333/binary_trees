#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right
 *			    child of the another node
 * @parent: pointer to the node to insert right child
 * @value: value to store in the new node
 *
 * Return: NULL, if parent is NULL or error
 *	    pointer to new node, otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->left = new;

	return (new);
}

