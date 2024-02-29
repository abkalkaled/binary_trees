#include "binary_trees.h"
/**
 * binary_tree_height - measures height of tree
 * @tree: pointer to root
 * Return: pointer to first node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: pointer to root node of tree
 * Return: 0 if tree NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
}
