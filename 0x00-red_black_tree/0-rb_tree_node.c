#include "rb_trees.h"

/**
 * rb_tree_node - function that creates a Red-Black Tree node
 * @parent: pointer to the parent
 * @value: value
 * @color: color
 * Return: pointer to the new node, or NULL on failure
 */
rb_tree_t *rb_tree_node(rb_tree_t *parent, int value, rb_color_t color)
{
	/* Declare a pointer variable to store the new node */
	rb_tree_t *tree;

	/* Allocate memory for the new node */
	tree = malloc(sizeof(rb_tree_t));
	if (!tree)
		return (NULL);

	/* Initialize the fields of the new node */
	tree->parent = parent;
	tree->color = color;
	tree->n = value;
	tree->left = NULL;
	tree->right = NULL;

	/* Return the pointer to the new node */
	return (tree);
}
