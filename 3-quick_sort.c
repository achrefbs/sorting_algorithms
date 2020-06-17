#include "sort.h"
int partition(int *array, int lo, int hi, size_t size);
/**
 * q_sort - function
 * @array : array
 * @lo : int
 * @hi : int
 * @size : size
 */
void q_sort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		q_sort(array, lo, p - 1, size);
		q_sort(array, p + 1, hi, size);
	}
}
/**
 * quick_sort - sorts an array using the Quick sort algorithm.
 * @array : array
 * @size : size
 */
void quick_sort(int *array, size_t size)
{
	q_sort(array, 0, size - 1, size);
}
/**
 * partition - function
 * @array : array
 * @lo : int
 * @hi : int
 * @size : size
 * Return: int
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo - 1, j, tmp;

	for (j = lo; j <= hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	return (i);
}
