#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creat node
 * @parent: parent node
 * @value: value of node
 *
 * Return: created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)  malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
}
