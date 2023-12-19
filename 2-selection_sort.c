#include"sort.h"



/**
 *selection_sort - a function that sorts an array of integers in ascending
 *			order using the Selection sort algorithm
 *Description:a function that sorts an array of integers in ascending
 *		order using the Selection sort algorithm
 *@array:array to be sort
 *@size:size of the array to sort
 *Return:list
 */


void selection_sort(int *array, size_t size)
{
	int x;
	size_t i, j, k;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, k = i + 1; j > i; j--)
		{
			if  (array[j] < array[k])
				k = j;
		}
		if  (array[i] > array[k])
		{
			x = array[i];
			array[i] = array[k];
			array[k] = x;
			print_array(array, size);
		}
	}
}
