#include "binary_trees.h"

/**
* binary_tree_delete - check code
* @tree: is a pointer to the root node of the tree to delete
* Return: if tree is NULL do nothing
**/
void binary_tree_delete(binary_tree_t *tree);
{
	binary_tree_delete *tmp;

	if (tmp == NULL)
		return (NULL);

	deleteTree(tmp->left);
	deleteTree(tmp->right);

	free(tmp);
}