#include <stdio.h>
#include <stdlib.h>
void saf();
void sort_bubble(double *arr, int arr_size){
    double tmp;
    int step = 0; 
    for(int i = 0; i < arr_size; ++i)
    {
	    for(int j = 0; j < arr_size - i - 1; ++j)
	    {
		    if(arr[j + 1] < arr[j])
		    {
		            tmp = arr[j + 1];
			    arr[j + 1] = arr[j];
      			    arr[j] = tmp;
			    saf(arr, arr_size, step, 1);
			    step++;
		    }
	    }
    }
}
