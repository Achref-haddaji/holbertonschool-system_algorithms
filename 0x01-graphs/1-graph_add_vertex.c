#include <stdlib.h>
#include <stdio.h>

#include "graphs.h"

/**
 * graph_add_vertex - Entry point
 * @graph: the orignal graph
 * @str: string to duplicate using strdup
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

vertex_t *graph_add_vertex(graph_t *graph, const char *str)
{
	vertex_t *new = NULL, *tmp = NULL;

	if (!str || !graph)
		return (NULL);
	tmp = graph->vertices;
	while (tmp)
	{
		if (!strcmp(tmp->content, str))
			return (NULL);
		if (!tmp->next)
			break;
		tmp = tmp->next;
	}
	new = malloc(sizeof(*tmp));
	if (!new)
		return (NULL);

	new->content = strdup(str);
	new->nb_edges = 0;
	new->edges = NULL;
	new->next = NULL;
	if (!graph->vertices)
	{
		new->index = 0;
		graph->vertices = new;
	}
	else
	{
		new->index = tmp->index + 1;
		tmp->next = new;
	}
	graph->nb_vertices++;
	return (new);
}
