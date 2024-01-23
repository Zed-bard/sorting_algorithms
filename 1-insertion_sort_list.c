#include "sort.h"

/* Helper function to swap two nodes in the list */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
    if (a == b)
        return;

    /* Handle head and tail cases: */
    if (a->prev == NULL) {  /* If a is the head */
        *list = b;  /* Update head pointer */
    }
    if (b->next == NULL) {  /* If b is the tail */
        /* No need to update tail pointer (already handled by a->next = b->next) */
    }

    /* Swap pointers: */
    if (a->prev != NULL)
        a->prev->next = b;
    if (b->next != NULL)
        b->next->prev = a;

    a->next = b->next;
    b->prev = a->prev;
    a->prev = b;
    b->next = a;
}

void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next;

    if (*list == NULL || (*list)->next == NULL)
        return; /* List is empty or has only one element */

    for (current = (*list)->next; current != NULL; current = current->next)
    {
        next = current->next;
        while (current->prev != NULL && current->prev->n > current->n && current != *list)  /* Modified condition */
        {
            /* Swap current node with its predecessor */
            swap_nodes(list, current->prev, current);
            print_list(*list); /* Print the list after each swap */
        }
        current = next;
    }
}

