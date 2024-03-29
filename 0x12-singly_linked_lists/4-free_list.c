#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: first node of list_t
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *current;

while ((current = head) != NULL)
{
head = head->next;
free(current->str);
free(current);
}
}
