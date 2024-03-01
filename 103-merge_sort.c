#include "sort.h"

/**
 * merge - sorts an array
 * @arr : container
 * @left: left sub array
 * @right: right sub array
 * @mid: middle element
 * Return: sorted array
 **/

void merge(int *arr, int letf, int mid, int right)
{
	int i, j, k;
	int x = mid - left + 1;
	int y =  right - mid;



