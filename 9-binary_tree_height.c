#include "binary_trees.h"

/**
* binary_tree_height - check code
* @tree:  is a pointer to the root node of the tree to measure the height.
* Return: If tree is NULL, your function must return 0
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l, height = 0;

	if (tree)
	{
		r = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		height += (r > l ? r : l);
	}
	return (height);
}
