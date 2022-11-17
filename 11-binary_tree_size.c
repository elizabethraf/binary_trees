#include "binary_trees.h"

/**
* binary_tree_size - check the code
* @tree: is a pointer to the root node of the tree to measure the size
* Return: If tree is NULL, the function must return 0
**/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, r = 0, l = 0;

	if (tree == NULL)
		return (0);
	{
		l = binary_tree_size(tree->left) + 1;
		r = binary_tree_size(tree->right) + 1;
		size = r + l + 1;
	}
	return (size);
}
