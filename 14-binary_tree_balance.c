#include "binary_trees.h"

/**
* binary_tree_balance - check code
* @tree:  is a pointer to the root node
* Return: If tree is NULL, return 0
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

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

/**
* maxDepth - check code
* @node: pointer
* Return: 0 if NULL
**/
int maxDepth(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{

		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		if (lDepth > rDepth)
		{
			return (lDepth + 1);
		}
		else
			return (rDepth + 1);

	}
}
