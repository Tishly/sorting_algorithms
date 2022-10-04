#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - function that sorts array using Bubble sort
 * @array: pointer to array to be sorted
 * @size: the size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t n, j;
	int tmp;

	for (n = 0; n < size; n++)
	{
		for (j = 0; j < size - n - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
