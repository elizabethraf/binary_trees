#include "binary_trees.h"

/**
* binary_tree_height - check code
* @tree:  is a pointer to the root node of the tree to measure the height.
* Return: If tree is NULL, your function must return 0
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return 1 + max(height(tree->left), height(tree->right));
}
int main()
{
    *tree = new_tree(15);
    tree->left = new_tree(10);
    tree->right = new_tree(20);
    tree->left->left = new_tree(8);
    tree->left->right = new_tree(12);
    tree->right->left = new_tree(16);
    tree->right->right = new_tree(25);

    count << "The height of the binary tree is " << height(tree);

    return 0;
}
