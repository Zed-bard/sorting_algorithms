# Sorting Algorithms & Big O Analysis


## Sorting Algorithms:

### Definition:
Sorting algorithms are a set of procedures that arrange elements in a specific order. The order can be ascending or descending based on some defined criteria, such as numerical or lexicographical order.

### Types of Sorting Algorithms:
1. **Bubble Sort:**
   - Compares adjacent elements and swaps them if they are in the wrong order.
   - Repeatedly passes through the list until no swaps are needed.

2. **Selection Sort:**
   - Divides the list into two parts: a sorted and an unsorted subarray.
   - Repeatedly selects the minimum (or maximum) element from the unsorted subarray and swaps it with the first unsorted element.

3. **Insertion Sort:**
   - Builds the sorted array one element at a time.
   - Takes each element and inserts it into its correct position in the already sorted part of the array.

4. **Merge Sort:**
   - Divides the array into two halves, recursively sorts them, and then merges them back together.
   - Utilizes a "divide and conquer" strategy.

5. **Quick Sort:**
   - Chooses a 'pivot' element and partitions the array into two subarrays.
   - Elements less than the pivot go to one subarray, while elements greater than the pivot go to the other.
   - Recursively applies the same process to the subarrays.

6. **Heap Sort:**
   - Builds a max heap (for ascending order) or a min heap (for descending order).
   - Extracts the root (which is the maximum or minimum) repeatedly to get a sorted array.

### Selection Criteria:
- The choice of a sorting algorithm depends on factors such as the size of the data set, stability requirements, and whether the data is partially sorted or completely unsorted.

## Big O Analysis:

### Definition:
Big O notation is a mathematical notation used to describe the performance or complexity of an algorithm. It provides an upper bound on the growth rate of the function that represents the algorithm's efficiency.

### Types of Time Complexities:
1. **O(1) - Constant Time:**
   - The algorithm's performance is constant, regardless of the size of the input.

2. **O(log n) - Logarithmic Time:**
   - Common in algorithms that divide the problem into smaller subproblems and solve them.

3. **O(n) - Linear Time:**
   - The runtime of the algorithm grows linearly with the size of the input.

4. **O(n log n) - Linearithmic Time:**
   - Common in efficient sorting algorithms like Merge Sort and Heap Sort.

5. **O(n^2) - Quadratic Time:**
   - Performance is directly proportional to the square of the size of the input data.

6. **O(2^n) - Exponential Time:**
   - Performance doubles with each additional element in the input set.

### Importance:
- Big O analysis helps in comparing and contrasting the efficiency of algorithms.
- It provides insights into how an algorithm scales with input size.

### Considerations:
- Optimizing algorithms for time complexity might result in increased space complexity and vice versa.
- Big O notation expresses the upper bound; actual performance may be better but won't exceed the given complexity.

Both Sorting Algorithms and Big O Analysis are crucial concepts for software engineers and computer scientists, influencing the design and implementation of efficient algorithms. Understanding these concepts is essential for writing code that performs well, especially when dealing with large datasets.

## Background Context
This project is designed for groups of two students, practicing pair programming for at least the mandatory part.

Pair programming is a collaborative software development technique where two programmers work together at one workstation. One, known as the driver, writes the code, while the other, the observer or navigator, reviews each line of code as it is typed. The roles are switched frequently, with the observer also considering the strategic direction of the work.

## Requirements

### General
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files must end with a new line
- A mandatory README.md file at the root of the project folder
- Code should adhere to the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- Avoid the use of global variables
- Limit of 5 functions per file
- Prohibition of standard library functions unless specified otherwise (e.g., `printf`, `puts`, etc.)
- `main.c` files provided as examples for testing functions, but not required to be pushed to the repository
- Prototypes of all functions included in the header file `sort.h`
- Push the header file with proper include guards
- A list/array doesn't need to be sorted if its size is less than 2.

### GitHub
- One project repository per group; cloning/forking a project repository with the same name before the second deadline may result in a 0% score.

## More Info

### Data Structure and Functions
For this project, you have access to the following functions:

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

Our files `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions) will be compiled with your functions during the correction.

**Please declare the prototype of the functions `print_array` and `print_list` in your `sort.h` header file.**

Use the following data structure for the doubly linked list:

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```


Pair programming allows team members to share quickly, making them less likely to have hidden agendas from each other. This helps pair programmers learn to communicate more easily, raising the communication bandwidth and frequency within the project, increasing overall information flow within the team.

## Project Details

### Author or Coordinator
- **Name:** `Alexandre Gautier`
- **Weight:** 2

### Team Members
- `Zerihun Shiferaw`
- `Ermiyas Solomon`

### Project Timeline
- **Start Date:** Jan 16, 2024 7:00 PM
- **End Date:** Jan 23, 2024 7:00 PM
