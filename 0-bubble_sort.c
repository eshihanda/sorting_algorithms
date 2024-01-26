#include "sort.h"

/**
*bubble_sort - sorts and array of integers using bubble sort
*@array: an array of integers to sort
*@size: the size of the array
*
*Return - sorted array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int flag = 1, tmp;

	if (!array || size <= 1)
		return;
	while (flag)
	{
		flag = 0;
		for (i = 0; i < (size - 1) && i != (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				flag = 1;
				print_array(array, size);
			}
		}
		i = 0;
	}
}
