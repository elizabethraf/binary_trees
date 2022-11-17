#include "binary_trees.h"

/**
* binary_tree_is_perfect - check code
* @tree: is a pointer to the root node
* Return: If tree is NULL, your function must return 0
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + binary_tree_is_perfect(tree->left);
		right = 1 + binary_tree_is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else
		if (!tree->left && !tree->right)
			return (1);

}

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
* binary_tree_depth - check code
* @tree: is a pointer to the node to measure the depth
* Return: If tree is NULL, your function must return 0
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	{
		size_t ldepth = binary_tree_depth(tree->left);
		size_t rdepth = binary_tree_depth(tree->right);

		if (ldepth > rdepth)
			return (ldepth + 1);

		else
			return (rdepth + 1);
	}
}
