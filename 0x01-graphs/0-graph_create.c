#include <stdlib.h>
#include <stdio.h>
#include "graphs.h"

/**
 * graph_create - creates a new graph_t structure and initializes its content
 *
 * Return: pointer to the new graph created, or NULL on failure
 */
graph_t *graph_create(void)
{
	/* Allocate memory for the new graph_t structure */
	graph_t *new = malloc(sizeof(graph_t));

	/* Check if memory allocation was successful */
	if (new == NULL)
		return (NULL);

	/* Initialize the new graph structure with default values */
	new->nb_vertices = 0;
	new->vertices = NULL;

	/* Return a pointer to the new graph structure */
	return (new);
}
