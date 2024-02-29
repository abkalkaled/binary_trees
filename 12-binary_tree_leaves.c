#include "binary_trees.h"

/**
 * binary_tree_leaves - measure the number of leaves of the tree
 * @tree: tree to measure from root
 * Return: 0 if tree is NULL, otherwise the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t leaves_left = binary_tree_leaves(tree->left);
    size_t leaves_right = binary_tree_leaves(tree->right);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    return (leaves_left + leaves_right);
}
