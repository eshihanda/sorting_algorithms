#include "sort.h"

/**
*Swap - swaps two integers
*@a: the first integer
*@b: the second integer
*/
void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
*lomuto_partition - separates array into partitions
*@array: the array to sort
*@start: start position of the array
*@end: end position of the array
*@size: size of the array
*Return: prints array each time it swaps
*/
int lomuto_partition(int *array, int start, int end, size_t size)
{
	int i = start, j = start;
	int pivot = array[end];

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			Swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	Swap(&array[i], &array[end]);
	if (i != end)
		print_array(array, size);
	return (i);
}
/**
 * sort_array - sort recursively both sub_arrays
 * @array: pointer to array
 * @start: start of sub-array
 * @end: end of sub-array
 * @size: size of the array
 * Return: none
 */
void sort_array(int *array, int start, int end, size_t size)
{
	int i;

	if (start < end)
	{
		i = lomuto_partition(array, start, end, size);
		sort_array(array, start, i - 1, size);
		sort_array(array, i + 1, end, size);
	}
}
/**
 * quick_sort - sorts array using quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: none
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	sort_array(array, 0, size - 1, size);
}
