#include "binary_trees.h"

/**
* binary_tree_delete - check code
* @tree: is a pointer to the root node of the tree to delete
* Return: if tree is NULL do nothing
**/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	deleteTree(tree->left);
	deleteTree(tree->right);
	*tree = NULL;

	free(tree);
}
