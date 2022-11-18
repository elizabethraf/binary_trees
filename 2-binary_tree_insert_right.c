#include "binary_trees.h"

/**
* binary_tree_t *binary_tree_insert_right - check code
* @parent: a pointer to the node to insert the right-child in
* @value: is the value to store in the new node
* Return:a pointer to the created node, or NULL on failure or if parent is NULL
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (binary_tree_t == 0)
	{
		binary_tree_t = (*parent) malloc(sizeof(int value)
		binary_tree_t->value = value;
		binary_tree_t->left = 0;
		binary_tree_t->right = 0;
	}
	else
		if  (value < (*parent)->value;
		{
			insert(value, & (*parent)->left);
		}
	else
		if (value > (*parent)->value
		{
			insert(value, &(*parent)->right);
		}
}
