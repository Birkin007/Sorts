#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "shell.h"
#define MAX_FILENAME_LENGTH 256

void save_e(int arr[], int size, int iteration) {
	char filename[MAX_FILENAME_LENGTH];
	snprintf(filename, MAX_FILENAME_LENGTH, "s_shell/iteration_%d.txt", iteration);
		    
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

void shell_sort(int arr[], int size) {
	int iteration = 0;
	for (int gap = size / 2; gap > 0; gap /= 2) {		
		for (int i = gap; i < size; i++) {
			int temp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				arr[j] = arr[j - gap];
			}
			arr[j] = temp;


			save_e(arr, size, iteration++);
		}
	}
}
