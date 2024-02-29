#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: pointer to array
 * @size: number of elements in array
 * Return: sorted array in ascending order
 **/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_idx, temp, ix;

	for (i = 0; i < size; i++)
	{
		min_idx = array[i];

		for (j = i + 1; j < size;  j++)
		{
			if (min_idx > array[j])
			{
				min_idx = array[j];
				ix = j;
			}
			if (min_idx != array[i])
			{
				temp = array[i];
				array[i] = min_idx;
				array[ix] = temp;
				print_array(array, size);
			}
		}
	}
}
