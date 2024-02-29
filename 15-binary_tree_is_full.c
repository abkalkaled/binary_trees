#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node of the tree
 *
 * Return: 0 if tree is NULL or not full, 1 if the tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (left_full && right_full);
}

