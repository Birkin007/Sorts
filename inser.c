#include "inser.h"
void saf();

void sort_insert(double *arr, int arr_size){
       int step = 0;   
       	for(int i = 1; i < arr_size; ++i)
	       {
	          for(int j = i; j > 0; --j)
	           {
	           if(arr[j] < arr[j - 1])
	          {
                     int tmp = arr[j];
       		     arr[j] = arr[j - 1];
       		     arr[j - 1] = tmp;
		     saf(arr, arr_size, step, 3);
		     step++;
		  }
	       }
}
}
