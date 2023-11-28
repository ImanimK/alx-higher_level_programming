#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Inserts a node in the proper place of a sorted list.
 * @head: Pointer to the first node of the linked list.
 * @number: Number to add in the linked list.
 * Return: Address of the new node or NULL if failure.
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node, *current;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    new_node->n = number;
    new_node->next = NULL;

    if (!*head || (*head)->n >= number)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    while (current->next && current->next->n < number)
        current = current->next;

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}

