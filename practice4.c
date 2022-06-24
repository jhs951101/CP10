#include <stdio.h>

void array_copy(int* A, int* B, int size){
	int i;
	for (i = 0; i < size; i++) {
		*(B+i) = *(A+i);
	}
}

int main(void) {
	int size = 10;
	int arr1[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
	int arr2[10];

	array_copy(arr1, arr2, size);

	printf("A[] = ");

	for(int i=0; i<size; i++){
		printf("%d ", arr1[i]);
	}

	printf("\nB[] = ");

	for(int i=0; i<size; i++){
		printf("%d ", arr2[i]);
	}

	printf("\n");
	return 0;
}