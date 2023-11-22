#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int binarySearch(int arr[], int left, int right, int key) {
	if (right >= left) {
		int mid = left + (right - left) / 2;
		if (arr[mid] == key)
			return mid;
		if (arr[mid] > key)
			return binarySearch(arr, left, mid - 1, key);
		return binarySearch(arr, mid + 1, right, key);
	}
	return -1;
}
int main() {
	int i = 0, j = 0;
	int arr[7] = { 0 };
	srand(time(0));
	for (i = 0; i < 7; i++)
	{
		arr[i] = rand() % 100 + 1;
		printf("%d ", arr[i]);
	}
	printf("\n");
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 7;
	int result = binarySearch(arr, 0, n - 1, key);
	if (result == -1)
		printf("Element is not present in array\n");
	else
		printf("Element is present at index %d\n", result);
	return 0;
}
