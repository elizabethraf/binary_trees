#include "binary_trees.h"

/**
* binary_tree_depth - check code
* @tree: is a pointer to the node to measure the depth
* Return: If tree is NULL, your function must return 0
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_depth(tree->left);
	size_t right = binary_tree_depth(tree->right);

	if ( left > right)
	return (left) + 1;
	else
		return (right) + 1;
}
