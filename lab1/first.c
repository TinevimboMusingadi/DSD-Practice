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
	int iterations = 100000; // Number of repetitions to get measurable time
clock_t start, end;
double cpu_time_used;

	// Benchmarking Linear Search (run multiple times to get stable timing)
	start = clock();
	for (int i = 0; i < iterations; i++) {
		linearSearch(arr, n, key);
	}
	end = clock();
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Linear Search Time (total for %d runs): %.9f seconds\n",
	       iterations, cpu_time_used);
	printf("Linear Search Time (average per run): %.12f seconds\n",
	       cpu_time_used / iterations);

	// Benchmarking Binary Search (run multiple times to get stable timing)
	start = clock();
	for (int i = 0; i < iterations; i++) {
		binarySearch(arr, n, key);
	}
	end = clock();

	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Binary Search Time (total for %d runs): %.9f seconds\n",
	       iterations, cpu_time_used);
	printf("Binary Search Time (average per run): %.12f seconds\n",
	       cpu_time_used / iterations);

free(arr);
return 0;
}