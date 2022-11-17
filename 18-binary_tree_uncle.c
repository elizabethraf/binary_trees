#include "binary_trees.h"

/**
* binary_tree_uncle - check code
* @node:  is a pointer to the node to find the uncle
* Return: If node is NULL, return NULL
* If node has no uncle, return NULL
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
