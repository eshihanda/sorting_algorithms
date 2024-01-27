#include "sort.h"

/**
 * selection_sort - function to sort array of integers
 * @array: array given for sort
 * @size: size of array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, tmp, swap = 0;

	for (i = 0; i < size; i++)
	{
		tmp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[tmp] > array[j])
			{
				tmp = j;
			}
		}
		if (tmp != i)
		{
			swap = array[i];
			array[i] = array[tmp];
			array[tmp] = swap;
			print_array(array, size);
		}
	}
}
