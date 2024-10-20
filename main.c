#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sel.h"
#include "bubl.h"
#include "inser.h"
#include "saf.h"
#include "qs.h"
#include "shell.h"

int main() {
	int arr_size = 100;
	double *arr = (double *)malloc(sizeof(double) * arr_size);
	srand(42);
	for(int i = 0; i < arr_size; ++i)
	{
		arr[i] = rand()%101;
	}
	sort_bubble(arr, arr_size);
	for(int i = 0; i < arr_size; ++i)
       	{
		arr[i] = rand()%101;
	}
	sort_select(arr, arr_size);
	for(int i = 0; i < arr_size; ++i)
	{
		arr[i] = rand()%101;
	}
	sort_insert(arr, arr_size);
	int step = 1;
	int *arr1 = (int *)malloc(sizeof(double) * arr_size);
	for(int i = 0; i < arr_size; ++i)
	{
		arr1[i] = rand()%101;
	}
	qs(arr1, arr_size);
	for(int i = 0; i < arr_size; ++i)
	{
		arr1[i] = rand()%101;
	}
	shell_sort(arr1, arr_size);
	return 0;
}
