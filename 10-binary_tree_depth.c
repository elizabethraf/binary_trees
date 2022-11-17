#include "binary_trees.h"

/**
* binary_tree_depth - check code
* @tree: is a pointer to the node to measure the depth
* Return: If tree is NULL, your function must return 0
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dist;
	binary_tree_t *tmp;

	for (tree == NULL)
		return (0);

	dist = 0;
	tmp = tree->parent;
	while (tmp)
		{
			dist++;
			tmp = tmp->parent;
		}
		return(dist);
}
