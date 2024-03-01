#include "sort.h"



void sift_down(int *array, int N, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < N && arra
/**
 * heap_sort - sorts an array of integers in
 * ascending order using the Heap sort algorithm
 * @array: container of elements
 * @size: length of array
 **/

void heap_sort(int *array, size_t size)
{
	int 
