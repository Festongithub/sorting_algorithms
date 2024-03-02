#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: contains elements
 * @size: number of elements in array
 * Return: array
 *
 **/

void bubble_sort(int *array, size_t size)
{
	size_t i,j,temp;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
			print_array(array, size);
		}
	}
}
