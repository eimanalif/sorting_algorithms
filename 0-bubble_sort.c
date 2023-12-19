#include"sort.h"




/**
 *bubble_sort - function that sorts an array of integers
 *		in ascending order using the Bubble sort algorithm
 *Description:function that sorts an array of integers in ascending
 *		order using the Bubble sort algorithm
 *@array:the array to be sorted
 *@size: is a size of array
 *Return:sorted list
 */



void bubble_sort(int *array, size_t size)
{
	int i;
	size_t  j, k;

	if (!array || !size)
		return;

	j = 0;
	while (j < size)
	{
		for (k = 0; k < size; k++)
		{
			if (array[k] > array[k + 1])
			{
				i = array[k];
				array[k] = array[k + 1];
				array[k + 1] = i;
				print_array(array, size);
			}
		}
		j++;
	}
}
