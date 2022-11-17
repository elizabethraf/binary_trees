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

	return (maxDepth(tree) - 1);
}
/**
* maxDepth - check code
* @node: it the pointer
* Return: the height
**/
int maxDepth(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else
	{
		size_t lDepth = maxDepth(node->left);
		size_t rDepth = maxDepth(node->right);

		if (lDepth > rDepth)
			return (lDepth+1);
		else
			return (rDepth+1);
	}
}
