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
    size_t i, j;
    int tmp;
    int swapped; /* flag to check if swapping occured*/

    if (!array || size < 2)
    {
        return;
    }
    for ( i = 0; i < size - 1; i++)
    {
        swapped = 0; /*reset the flag for each swap*/
        
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[i] > array[i + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                swapped = 1; /* a swap occurred*/
                print_array(array, size);
            }
        }
        if (swapped == 0) /*array is already sorted*/
            break;
    }

}
