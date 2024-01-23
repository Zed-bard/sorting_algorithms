#include "sort.h"

/* Helper function to swap two nodes in the list */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
    if (a == b)
        return;

    if (a->prev == NULL) {
        *list = b;
    }
    else {
        a->prev->next = b;
    }

    if (b->next == NULL) {
        (*list)->prev = b;
    }
    else {
        b->next->prev = a;
    }

    a->next = b->next;
    b->prev = a->prev;
    a->prev = b;
    b->next = a;
}

void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next;

    if (*list == NULL || (*list)->next == NULL)
        return;

    for (current = (*list)->next; current != NULL; current = next)
    {
        next = current->next;
        while (current->prev != NULL && current->prev->n > current->n && current->prev != *list)
        {
            swap_nodes(list, current->prev, current);
            print_list(*list);
        }
    }
}
