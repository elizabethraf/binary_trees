#include "binary_trees.h"

/**
* binary_trees_ancestor - check code
* @first: is a pointer to the first node
* @second: is a pointer to the second node
* Return: must return NULL
**/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *prev, *tmp;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	prev = first->parent, tmp = second->parent;
	if (first == tmp || !prev || (!prev->parent && tmp))
			return (binary_trees_ancestor(first, tmp));
	else
		if (prev == second || !tmp || (!tmp->parent && prev))
				return (binary_trees_ancestor(prev, second));

	return (binary_trees_ancestor(prev, tmp));
}
