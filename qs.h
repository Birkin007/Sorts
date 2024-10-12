void saf(double *arr, int arr_size, int step, int ver);

void sort_qsort(double *arr, int arr_size, int *step) {
	if (arr_size <= 1) {
		return;
	}
	double pivot = 0;
	for (int i = 0; i < arr_size; ++i) {
		pivot += arr[i];
	}
	pivot /= arr_size;

	int wall = 0;
	for (int i = 0; i < arr_size; ++i) {
		if (arr[i] < pivot) {
			double tmp = arr[i];
			arr[i] = arr[wall];
			arr[wall] = tmp;
			++wall;

			saf(arr, arr_size, *step, 4); 

		    	(*step)++;
		}
	}
	if (wall > 0) {
		        sort_qsort(arr, wall, step); 
			    }
	    if (arr_size - wall > 0) {
		            sort_qsort(arr + wall, arr_size - wall, step); 
			        }
}
