#include "sel.h"
void saf();
void sort_select(double *arr, int arr_size){
	int step = 0;
    	for(int i = 0; i < arr_size; ++i)
	{
		int min_el_ind = i;
		for(int j = i + 1; j < arr_size; ++j)
		{
			if(arr[j] < arr[min_el_ind])
			{
				min_el_ind = j;
				saf(arr, arr_size, step, 2);
				step++;
			}
		}
		int tmp = arr[min_el_ind];
		arr[min_el_ind] = arr[i];
		arr[i] = tmp;
	}
}
