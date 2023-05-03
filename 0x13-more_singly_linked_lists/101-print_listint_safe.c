#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
    const listint_t *ptr1, *ptr2;
    size_t count = 1;

    if (head == NULL || head->next == NULL)
        return (0);

    ptr1 = head->next;
    ptr2 = (head->next)->next;

    while (ptr2)
    {
        if (ptr1 == ptr2)
        {
            ptr1 = head;
            while (ptr1 != ptr2)
            {
                count++;
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }

            ptr1 = ptr1->next;
            while (ptr1 != ptr2)
            {
                count++;
                ptr1 = ptr1->next;
            }

            return (count);
        }

        ptr1 = ptr1->next;
        ptr2 = (ptr2->next)->next;
    }

    return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodeCount, idx = 0;

    nodeCount = looped_listint_len(head);

    if (nodeCount == 0)
    {
        for (; head != NULL; nodeCount++)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }
    }
    else
    {
        for (idx = 0; idx < nodeCount; idx++)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }

        printf("-> [%p] %d\n", (void *)head, head->n);
    }

    return (nodeCount);
}
