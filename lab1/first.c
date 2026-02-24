#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// O(n) Complexity: Linear Search
int linearSearch(int arr[], int n, int key) {
for (int i = 0; i < n; i++) {
if (arr[i] == key) return i;
}
return -1;
}

// O(log n) Complexity: Binary Search (Iterative)

int binarySearch(int arr[], int n, int key) {
int low = 0, high = n - 1;
while (low <= high) {
int mid = low + (high - low) / 2;
if (arr[mid] == key) return mid;
if (arr[mid] < key) low = mid + 1;
else high = mid - 1;
}
return -1;
}

int main() {
int n = 100000; // Dataset size
int *arr = (int*)malloc(n * sizeof(int));
for (int i = 0; i < n; i++) arr[i] = i; // Populate with sorted data

int key = 99999; // Worst-case scenario (last element)
clock_t start, end;
double cpu_time_used;

// Benchmarking Linear Search
start = clock();
linearSearch(arr, n, key);
end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("Linear Search Time: %f seconds\n", cpu_time_used);

// Benchmarking Binary Search
start = clock();
binarySearch(arr, n, key);
end = clock();

cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("Binary Search Time: %f seconds\n", cpu_time_used);

free(arr);
return 0;
}