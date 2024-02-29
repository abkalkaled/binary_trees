#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree node
 * @tree: pointer to the node
 * Return: depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    while (tree && tree->parent)
    {
        tree = tree->parent;
        depth++;
    }

    return depth;
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    size_t depth_first, depth_second;

    if (!first || !second)
        return NULL;

    depth_first = binary_tree_depth(first);
    depth_second = binary_tree_depth(second);

    while (depth_first > depth_second)
    {
        first = first->parent;
        depth_first--;
    }

    while (depth_second > depth_first)
    {
        second = second->parent;
        depth_second--;
    }

    while (first && second)
    {
        if (first == second)
            return (binary_tree_t *)first;

        first = first->parent;
        second = second->parent;
    }

    return NULL;
}
