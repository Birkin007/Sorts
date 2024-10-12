#include <stdio.h>
#include <stdlib.h>
#include "qs.h"
#include "sel.h"
#include "bubl.h"
#include "inser.h"
#include "saf.h"
int main() {
	int arr_size = 20;
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
	for(int i = 0; i < arr_size; ++i)
	{
		arr[i] = rand()%101;
	}
	sort_qsort(arr, arr_size, &step);
	return 1;
}
