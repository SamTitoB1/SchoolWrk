#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <queue>
#include "HastTable.h"

int compare_integers(const void* a, const void* b);
void pqSort(int* arr, int size);
void mySort(int* arr, int size);
int compArray(int* arr1, int* arr2, int size);

int compare_integers(const void* a, const void* b) {
    const int* int_a = (const int*)a;
    const int* int_b = (const int*)b;

    if (*int_a == *int_b) {
        return 0;
    }
    else if (*int_a < *int_b) {
        return -1;
    }
    else {
        return 1;
    }
}

int* generate_random_array(int min, int max, int size) {
    if (size <= 0) {
        return NULL;
    }

    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        return NULL;
    }

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        int random_num = rand();
        random_num = (random_num << 15) | rand(); // Combine two random numbers to get a 30-bit random number
        random_num = random_num % (max - min + 1) + min; // Scale the random number to the desired range
        array[i] = random_num;
    }

    return array;
}

void duplicate_array(int* src, int* dst, int size) {
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
}

int main() {
    int min = 1;
    int max = 100;
    int size = 20000;

    // Generate random array
    int* random_array = generate_random_array(min, max, size);
    if (random_array == NULL) {
        printf("Failed to generate random array.\n");
        return 1;
    }

    // Duplicate random array
    int* copy1 = (int*)malloc(size * sizeof(int));
    int* copy2 = (int*)malloc(size * sizeof(int));
    if (copy1 == NULL || copy2 == NULL) {
        printf("Failed to allocate memory for copy arrays.\n");
        free(random_array);
        return 1;
    }

    duplicate_array(random_array, copy1, size);
    duplicate_array(random_array, copy2, size);

    // Sort random array using qsort
    clock_t c1 = clock();
    qsort(random_array, size, sizeof(int), compare_integers);
    clock_t c2 = clock();
    int qsortTime = 1000 * (c2 - c1) / CLOCKS_PER_SEC;

    // Sort random array using mySort
    duplicate_array(copy1, random_array, size);
    c1 = clock();
    mySort(random_array, size);
    c2 = clock();
    int mySortTime = 1000 * (c2 - c1) / CLOCKS_PER_SEC;

    // Sort random array using pqSort
    duplicate_array(copy2, random_array, size);
    c1 = clock();
    pqSort(random_array, size);
    c2 = clock();
    int pqSortTime = 1000 * (c2 - c1) / CLOCKS_PER_SEC;

    // Print sorting time
    printf("qsort time: %d milliseconds\n", qsortTime);
    printf("mySort time: %d milliseconds\n", mySortTime);
    printf("pqSort time: %d milliseconds\n", pqSortTime);

    // Check if both arrays are identical after sorting
    if (compArray(random_array, copy1, size) != 0) {
        printf("Sorting error: qsort and mySort give different results.\n");
    }

    // Free memory
    free(random_array);
    free(copy1);
    free(copy2);

    return 0;
}

void pqSort(int* arr, int size) {
    // Create a max-heap priority queue
    std::priority_queue<int> pq(arr, arr + size);

    // Pop elements from the priority queue and put them back in the array
    for (int i = size - 1; i >= 0; i--) {
        arr[i] = pq.top();
        pq.pop();
    }
}

void mySort(int* arr, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap arr[j] and arr[j+1]
                temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int compArray(int* arr1, int* arr2, int size) {
	for (int i = 0; i < size; i++) {
		if (arr1[i] != arr2[i]) {
			return -1;
		}
	}
	return 0;
}
