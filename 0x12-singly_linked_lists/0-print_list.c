#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints content of linked list
 *
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t nodes;
    char *str;
    list_t *ptr;


    ptr = (list_t *)h;

    if(ptr->str == NULL)
        printf("[0] (nil)");


    while (ptr != NULL) {
        nodes++;

        printf("[%u] ", ptr->len);

        str = ptr->str;
        while (*str != '\0') {
            _putchar(*str++);
        }
        _putchar('\n');
        ptr = ptr->next;
    }

    return (nodes);
}

