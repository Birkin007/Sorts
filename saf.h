#include <stdio.h>
#include <stdlib.h>

void saf(double *arr, int arr_size, int step, int ver) {
       	char filename[100];
	if(ver == 1)
	{
		sprintf(filename, "s_bub/array_step_%d.txt", step);
	}
	if( ver == 2)
	{
		sprintf(filename, "s_sel/array_step_%d.txt", step);
	}
	if(ver == 3)
	{
		sprintf(filename, "s_inser/array_step_%d.txt", step);
	}
	if(ver == 4)
	{
		sprintf(filename, "s_qs/array_step_%d.txt", step);
	}
	FILE *file = fopen(filename, "w");
	if (file == NULL) {
		printf("Error opening file!\n");
		return;
	}
	for (int i = 0; i < arr_size; ++i) {
		fprintf(file, "%lf ", arr[i]);
	}
	fprintf(file, "\n");
	fclose(file);
}	
