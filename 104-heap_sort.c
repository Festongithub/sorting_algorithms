#include "sort.h"



void sift_down(int *array, int i, int j,  size_t size)
{
	int largest = j;
	int left = 2 * j + 1;
	int right = 2 * j + 2;
	int tmp;

	if (left < i && array[left] > array[largest])
	{
		largest = left;
	}

	if (right < i  && array[right] > array[largest])
	{
                largest = right;
        }

	if (largest != j)
	{
		tmp = array[i];
		array[j] = array[largest];
		array[largest] = tmp;
		print_array(array, size);
		sift_down(array, i, largest, size);
	}
}



/**
 * heap_sort - sorts an array of integers in
 * ascending order using the Heap sort algorithm
 * @array: container of elements
 * @size: length of array
 **/

void heap_sort(int *array, size_t size)
{
	int i, tmp;

	for (i = size / 2 - 1; i >= 0; i--)
		sift_down(array, i, size, size);

	for (i = size - 1; i >= 0; i--)
	{
		tmp = array[0];
		array[0] = array[i];
		array[i] = tmp;
		print_array(array, size);
		sift_down(array,i, 0, size);
	}
}
