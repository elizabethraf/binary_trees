#include "binary_trees.h"
/**
* binary_tree_t *binary_tree_node - Check code
* @parent: parent of binary tree
* @value: the value of the binary tree
* Return: a pointer to the new node, or NULL on failure
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
	binary_tree_t *tmp = NULL;

	tmp = (node *)malloc(sizeof(node));

	if (!(*binary_tree))
	{
		tmp->n = value;
		tmp->parent = parent;
		tmp->left = tmp->right = NULL;
		*binary_tree = tmp;
	}

		return (temp);
}
