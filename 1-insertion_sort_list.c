#include "sort.h"


/**
 *swap - to swap to elements
 *Descreption:swap function
 *@x:first node adress
 *@y: second adress of node
 *Return: void
 */



void swap(listint_t *x, listint_t *y)
{
	if (x->prev)

		x->prev->next = y;
	if (y->next)
		y->next->prev = x;
	x->next = y->next;
	y->prev = x->prev;
	x->prev = y;
	y->next = x;
}




/**
 *insertion_sort_list - a function that sorts a doubly linked list
 *			of integers in ascending order using the
 *			Insertion sort algorithm
 *Description:a function that sorts a doubly linked list of integers in
 *		ascending order using the Insertion sort algorithm
 *@list: the list to be sort
 *Return:list
 */





void insertion_sort_list(listint_t **list)
{
	listint_t *j, *k;

	if (!list || !*list || !(*list)->next)
		return;
	j = (*list)->next;
	while(j)
	{
		k = j;
		j = j->next;
		while(k && k->prev)
		{
			if (k->prev->n > k->n)
			{
				swap(k->prev, k);
				if(!k->prev)
					*list = k;
				print_list((const listint_t *)*list);
			}
			else
				k = k->prev;
		}
	}
}
