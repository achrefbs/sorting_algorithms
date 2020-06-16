#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *tmp, *tmp2, *tmp3;
    if (list == NULL)
        return;
    tmp = malloc(sizeof(listint_t));
    if (tmp == NULL)
        return;
    tmp2 = malloc(sizeof(listint_t));
    if (tmp2 == NULL)
        return;
    tmp3 = malloc(sizeof(listint_t));
    if (tmp3 == NULL)
        return;
    tmp = *list;
    while (tmp)
    {
        tmp2 = tmp;
        while (tmp2->prev)
        {
            tmp3 = tmp2->prev;
            if (tmp2->n < tmp3->n)
            {
                swap_node(tmp3 ,tmp2, list);
                print_list(*list);
                continue;
            }
            tmp2 = tmp2->prev;
        }
        tmp = tmp->next;
    }
}
void swap_node(listint_t *n1, listint_t *n2, listint_t **head)
{
    n1->next = n2->next;
    n2->prev = n1->prev;
    if (n2->next)
        n2->next->prev = n1;
    if (n1->prev)
        n1->prev->next = n2;
    if (n1->prev == NULL)
        *head = n2;    
    n2->next = n1;
    n1->prev = n2;
}