#include "binary_tree.h"
/**
 * binary_tree_is_root - checks if node is a root
 * @node: pointer to node in check
 * Return: 1 if node, 0 if otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->parent == NULL);
}
