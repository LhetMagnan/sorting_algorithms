#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t s, n, new_n;
	int swap;

	if (array == NULL || size < 2)
		return;

	n = size;
	while (n > 0)
	{
		new_n = 0;
		for (s = 0; s < n - 1; s++)
		{
			if (array[s] > array[s + 1])
			{
				swap = array[s];
				array[s] = array[s + 1];
				array[s + 1] = swap;
				new_n = s + 1;
				print_array(array, size);
			}
		}
		n = new_n;
	}
}
