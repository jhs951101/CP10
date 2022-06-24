#include <stdio.h>

void array_print(int *A, int size)
{
	int i;
	printf("A[]={ ");
	for(i=0; i<size ; i++){
		printf("%d ", *(A+i));
	}
	printf(" }\n");
}

int main(void) {
	int arr[10] = {1, 2, 3, 4, 0, 0, 0, 0, 0, 0};
	int size = 10;
	array_print(arr, size);
	return 0;
}