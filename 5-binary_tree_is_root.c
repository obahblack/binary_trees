#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks f a given node is a root
 * @node: the pointer to the node to be checked
 * Return: 1 if node is a root otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	/* A root node has no parent */
	if (node->parent == NULL && node != NULL)
	{
		return (1);
	}
	return  (0);
}
