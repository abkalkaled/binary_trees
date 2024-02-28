#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function to check if node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if kleaf, 0 if otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}
