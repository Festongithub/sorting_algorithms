#include "sort.h"

/**
 * postion_swap - changes position of elements in ascending order
 * @a: first element
 * @b: second element to swap
 * Return: swapped element
 **/

void position_swap(int *a, int *b)
{
	int tmp;
	*a = tmp;
	*a = *b;
	*b = tmp;
}


/**
 * partition - allocates memory for elements
 * @array: container
 * @high: highest element
 * @low: least element
 * @size: length of array
 * Return: alloacated element
 **/

int partition(int *array, int high, int low, int size)
{
	int p = high - 1; fin = low + 1;
	int point = array[low];

	while {
		do {
			p++;
		} while (array[p] < point);
		do {
			fin--;
		}while(array[fin] > point);
		if (p >= fin)
		{
			return (p);
		}
		position_swap(array, p, fin);
		print_array(array, size)
	}
}

/**
 * sort - changes an array
 * @array: container
