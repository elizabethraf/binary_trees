#include "binary_trees.h"
/**
* binary_tree_t *binary_tree_node - Check code
* @parent: parent of binary tree
* @value: the value of the binary tree
* Return: a pointer to the new node, or NULL on failure
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp != NULL)
	{
		tmp->n = value;
		tmp->parent = parent;
		tmp->left = NULL;
		tmp->right = NULL;
	}
	return (tmp);
}
