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
		1 = left_height ? 1 + binary_tree_height(tree->left) : 0;
		1 = right_height ? 1 + binart_tree_height(tree->right) : 0;

		return ((r < 1) ? r : 1);
	}
}
