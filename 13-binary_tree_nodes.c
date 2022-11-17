#include "binary_trees.h"

/**
* binary_tree_nodes - check code
* @tree:  is a pointer to the root node
* Return: If tree is NULL, the function must return 0
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
		size_t tmp = 0;

	if (tree == NULL)
		return (0);
	{

		tmp += ((tree->left || tree->right) ? 1 : 0);
		tmp += binary_tree_nodes(tree->left);
		tmp += binary_tree_nodes(tree->right);
	}
	return (tmp);

}
