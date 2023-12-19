#include"sort.h"



/**
 *swap  - swap two elements
 *Description:swaps two elements
 *@array: an array
 *@size:size of an array
 *@x:first elment to swap
 *@y:second element to swap
 *Return: an array
 */


void swap(int *array, size_t size, int *x, int *y)
{
	if (*x != *y)
	{
		*x = *x + *y;
		*y = *x - *y;
		*x = *x - *y;
		print_array((const int *)array, size);
	}
}
	




size_t lomuto_partition(int *array, size_t size, ssize_t low, ssize_t high)
{
	int i, k, pivot = array[high];

	for (i = k = low; k < high; k++)
	{
		if (array[k] < pivot)
			swap(array, size, &array[k], &array[i++]);

	swap(array, size, &array[i], &array[high]);
	}
	return (i);
}


/**
 *quicksort - sort an array
 *Description: sort an array
 *@array:an array to sort
 *@size:size of an array
 *@low:lowest element
 *@high:highest element
 *Return:void
 */


void quicksort(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t pivot = lomuto_partition(array, size, low,  high);

		quicksort(array, size, low,  pivot - 1);

		quicksort(array, size, pivot + 1,  high);
	}
}


/**
 *quick_sort - a function that sorts an array of integers in ascending
 *		order using the Quick sort algorithm
 *Description:a function that sorts an array of integers in ascending
 *		order using the Quick sort algorithm
 *@array:array to be sort
 *@size:size of the array
 *Return:sorted array
 */


void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	quicksort(array, size, 0, size-1);
}	
