#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int findMaxRecursive(int arr[], int size) {
	
	if (size == 1) {
		return arr[0];
	}
	int maxRest = findMaxRecursive(arr + 1, size - 1);
	return (arr[0] > maxRest) ? arr[0] : maxRest;
}

int main() {
	srand(time(0));
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
	}
	printf("\n");
	int size = sizeof(arr) / sizeof(arr[0]);

	int max = findMaxRecursive(arr, size);

	printf("The maximum element in the array is: %d\n", max);

	return 0;
}