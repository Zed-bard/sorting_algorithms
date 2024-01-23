#include "sort.h"

void quick_sort(int *array, size_t size)
{
    size_t i, j;  // Declare i and j at the beginning
    int pivot;

    if (size <= 1)
        return; /* Base case: Array of size 0 or 1 is already sorted */

    pivot = array[size - 1];

    for (j = 0; j < size - 1; j++) {  // Move j's declaration outside the loop
        if (array[j] <= pivot) {
            int temp = array[i];  // Declare temp inside the if block
            array[i] = array[j];
            array[j] = temp;
            i++;
            print_array(array, size); /* Print the array after each swap */
        }
    }

    int temp = array[i];  // Declare temp again for the final swap
    array[i] = array[size - 1];
    array[size - 1] = temp;

    quick_sort(array, i);
    quick_sort(array + i + 1, size - i - 1);
}
