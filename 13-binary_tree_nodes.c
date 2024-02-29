#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to root node of tree
 * Return: 0 if tree NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tree_node = 0;

	if (tree)
	{
		tree_node += (tree->left || tree->right) ? 1 : 0;
		tree_node += binary_tree_nodes(tree->left);
		tree_node += binary_tree_nodes(tree->right);
	}
	return (tree_node);
}
