#include <stdio.h>
#include <stdlib.h>


/**
 * This algorithm is a recursive sorting algorithm which works by
 * dividing the array into halves and sorting each half recursively
 * 
 * Time Complexity: O(nlogn)
*/
void merge(int* arr, int l, int m, int r);
void merge_sort(int* arr, int l, int r);


void merge_sort(int* arr, int l, int r) {
    if (l < r) {

        int m = (l + r) / 2;
  
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}


// merge two arrays in a sorted manner
void merge(int* arr, int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
  
    // tmp arrs for each subarray
    int* tmp_l = malloc(sizeof(int) * n1);
    int* tmp_r = malloc(sizeof(int) * n2);
  
    // copy to the two temp arrays
    for (int i = 0; i < n1; i++) {
        tmp_l[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++) {
        tmp_r[j] = arr[m + j + 1];
    }
        
  
    /* Merge the temp arrays back into arr[l..r]*/
    int i = 0, j=0, k=l;

    while (i < n1 && j < n2) {
        if (tmp_l[i] <= tmp_r[j]) {
            arr[k] = tmp_l[i];
            i++;
        }
        else {
            arr[k] = tmp_r[j];
            j++;
        }
        k++;
    }
  
    // copy leftovers to the end of the array
    while (i < n1) {
        arr[k] = tmp_l[i];
        i++;
        k++;
    }
  
    while (j < n2) {
        arr[k] = tmp_r[j];
        j++;
        k++;
    }

    // free used memory
    free(tmp_l);
    free(tmp_r);
}
