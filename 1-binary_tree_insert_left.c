#include "binary_trees.h"

/**
 * binary_tree_insert_left - insterts a node as a leftchild
 *				of another binary tree
 * @parent: a pointer to the node to insert the leftchild
 * @value: The value to store
 *
 * Return: Null, If parent is NULL or error
 *	Pointer to the new node, otherwise
 *
 * Description: If parent already has a left-child,
 *		the new node replaces the oldnode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}

