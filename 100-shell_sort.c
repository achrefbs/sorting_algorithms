#include "sort.h"
/**
 * shell_sort - sorts an array using the Shell sort algorithm.
 * @array : array to be sorted
 * @size : size of the array
 */
void shell_sort(int *array, size_t size)
{
	int n = 1, i, j, tmp;

	while (n < (int)size / 3)
		n = n * 3 + 1;
	while (n > 0)
	{
		for (i = n; i < (int)size; i++)
		{
			for (j = i; j > 0 && array[j] < array[j - n]; j -= n)
			{
				tmp = array[j];
				array[j] = array[j - n];
				array[j - n] = tmp;
			}
		}
		n = (n + 1) / 3;
		print_array(array, size);
	}
}
