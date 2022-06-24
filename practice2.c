#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void array_fill(int *A, int size) {
	int i;
	for(i=0; i<size; i++){
		*(A+i) = rand();
	}
}

int main(void) {
	srand((unsigned)time(NULL));

	int arr[10];
	int size = 10;

	array_fill(arr, size);

	for(int i=0; i<size; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}