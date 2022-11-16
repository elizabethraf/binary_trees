#include "binary_trees.h"

/**
* size_t binary_tree_heigh - check code
* @tree:  is a pointer to the root node of the tree to measure the height.
* Return: If tree is NULL, your function must return 0
**/
size_t binary_tree_height(const binary_tree_t *tree);
{
	if (tree == NULL)
		return (0);

	else
	{
		left_height = tree_height(tree->left);
		right_height = tree_height(tree->right);

		return (max(left_height, right_height) + 1);
	}
}
