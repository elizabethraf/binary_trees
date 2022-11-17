#include "binary_trees.h"

/**
* binary_tree_leaves - check code
* @tree: is a pointer to the root node
* Return: If tree is NULL, the function must return 0
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tmp = 0, l = 0, r = 0;

	if (tree == NULL)

		return (0);
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		return ((!l && !r) ? tmp + 1 : tmp + 0);
	}
	return (tmp);
}
