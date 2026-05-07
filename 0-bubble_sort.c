#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
