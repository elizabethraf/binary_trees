#include "binary_trees.h"

/**
* binary_tree_t *binary_tree_insert_right - check code
* @parent: a pointer to the node to insert the right-child in
* @value: is the value to store in the new node
* Return:a pointer to the created node, or NULL on failure or if parent is NULL
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	tmp = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		tmp->right = parent->right;
		parent->right->parent = tmp;
	}
	parent->right = tmp;
	return (tmp);
}
