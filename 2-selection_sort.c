#include<stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorting array elements by ascending order
 *
 * @array: list of numbers
 * @size: number of elements in array
 *
 *
 *
 */


void selection_sort(int *array, size_t size)
{
size_t n = 0, z, y;
int temp;

while (n < size)
{
	z = n;
	y = n + 1;
	while (y < size)
	{
		if (array[y] < array[z])
			z = y;
		y++;
	}
	if (z != n)
	{
		temp = array[z];
		array[z] = array[n];
		array[n] = temp;
		print_array(array, size);
	}
	n++;
}
}
