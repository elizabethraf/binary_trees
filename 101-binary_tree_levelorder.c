#include "binary_trees.h"

/**
* binary_tree_levelorder - check code
* @tree: is a pointer to the root node of the tree to traverse
* @func:is a pointer to a function to call for each node.
* Return: If tree or func is NULL, do nothing
**/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	 
