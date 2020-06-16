#include "sort.h"
int find_minimum(int *array, int s_index, size_t size);
/**
 * selection_sort - sorts an array using the Selection sort algorithm.
 * @array : array to be sorted
 * @size : size of the array
 */
void selection_sort(int *array, size_t size)
{
	int i, min, tmp;

	for (i = 0; i < (int)size; i++)
	{
		min = find_minimum(array, i, size);
		if (min != -1)
		{
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		print_array(array, size);
		}
	}
}
/**
 * find_minimum - find index of min in array.
 * @array : array
 * @s_index : starting index
 * @size : size of the array
 * Return: index of min in array.
 */
int find_minimum(int *array, int s_index, size_t size)
{
	int i, min, min_index;

	min = array[s_index];
	min_index = s_index;
	for (i = s_index; i < (int)size; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			min_index = i;
		}
	}
	if (min_index == s_index)
		return (-1);
	return (min_index);
}
