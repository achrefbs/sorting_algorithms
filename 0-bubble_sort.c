#include "sort.h"
/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm.
 * @array : array
 * @size : size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, sw = 0;

	while (1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				sw = 1;
				print_array(array, size);
			}
		}
		if (sw == 0)
			break;
		sw = 0;
	}
}
