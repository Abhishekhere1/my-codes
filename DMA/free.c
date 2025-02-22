// C program to demonstrate use of
// free() function using calloc()
#include <stdio.h>
#include <stdlib.h>
int main()
{

	// This pointer ptr will hold the
	// base address of the block created
	int* ptr;
	int n = 5;

	// Get the number of elements for the array
	printf("Enter number of Elements: %d\n", n);

	scanf("%d", &n);

	// Dynamically allocate memory using calloc()
	ptr = (int*)calloc(n, sizeof(int));

	// Check if the memory has been successfully
	// allocated by calloc() or not
	if (ptr == NULL) {
		printf("Memory not allocated \n");
		exit(0);
	}
	// Memory has been Successfully allocated using calloc()
	printf("Successfully allocated the memory using "
		"calloc(). \n");

	// Free the memory
	free(ptr);

	printf("Calloc Memory Successfully freed.");

	return 0;
}
