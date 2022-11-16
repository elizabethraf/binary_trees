#include "binary_trees.h"

/**
* binary_tree_t *binary_tree_insert_left - check code
* @parent: s a pointer to the node to insert the left-child in
* @value: is the value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
**/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL || tmp == NULL)
		return (NULL);
	tmp = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		tmp->left = parent->left;
		parent->left->parent = tmp;
	}
	parent->left = tmp;
	return (tmp);
}

