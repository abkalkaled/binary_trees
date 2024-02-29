#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to node to find value
 *
 * Return: 0 if no node or no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	*grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
		return (grandparent->right);
	return (grandparent->left);
}
