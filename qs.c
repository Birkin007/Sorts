#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

#define MAX_FILENAME_LENGTH 256


void save_array_to_file(int arr[], int size, int iteration) {
	char filename[MAX_FILENAME_LENGTH];
	struct stat st = {0};
	if (stat("s_qs", &st) == -1) {
		mkdir("s_qs", 0700);
	}


	snprintf(filename, MAX_FILENAME_LENGTH, "s_qs/iteration_%d.txt", iteration);

	FILE *file = fopen(filename, "w");
	if (file == NULL) {
		printf("Error opening file!\n");
		return;
	}


	for (int i = 0; i < size; i++) {
		fprintf(file, "%d ", arr[i]);
	}
	fprintf(file, "\n");

	fclose(file);
}

void qs(int arr[], int size) {
	int stack[size];
	int top = -1;
		    
	int start = 0;
	int end = size - 1;

	stack[++top] = start;
	stack[++top] = end;
				    
	int iteration = 0;
				        
	while (top >= 0) {
		end = stack[top--];
		start = stack[top--];

		int pivot = arr[end];
		int i = (start - 1);

		for (int j = start; j < end; j++) {
			if (arr[j] < pivot) {
				i++;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

		int temp = arr[i + 1];
		arr[i + 1] = arr[end];
		arr[end] = temp;

		int pivot_index = i + 1;


	
		save_array_to_file(arr, size, iteration++);

	
		if (pivot_index - 1 > start) {
			stack[++top] = start;
			stack[++top] = pivot_index - 1;
		}


	
		if (pivot_index + 1 < end) {
			stack[++top] = pivot_index + 1;
			stack[++top] = end;																						        }
	}
}

