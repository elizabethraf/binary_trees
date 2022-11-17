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
	else
	{
		size_t ldepth = binary_tree_depth(tree->left);
		size_t rdepth = binary_tree_depth(tree->right);

		if (ldepth > rdepth)
			return (ldepth+1);
		else
			return (rdepth+1);
	}
}
