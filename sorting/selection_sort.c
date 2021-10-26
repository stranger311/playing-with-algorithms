#include <stdio.h>

/**
 * This algorithm sorts an array by selecting the minimal item 
 * each time and placing it at the beginning of the array
 * 
 * Time Complexity: O(n^2)
*/

void selection_sort(int arr[], int n);
void swap(int* x, int* y);

void selection_sort(int arr[], int n) {
    int *min, tmp;
    for (size_t i = 0; i < n; ++i)
    {
        // find next minimal item
        min = arr + i;
        for (size_t j = i; j < n; ++j)
        {
            if (arr[j] < *min) {
                min = arr + j;
            }
        }
        // place the minimal item at the start
        swap(min, arr + i);
    } 
}

void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    // test example
    int arr[] = {7, 2, 5, 4, 3, 1, 9, 9, 18, -5, 6, 3};
    int len = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, len);

    // print array
    for (size_t i = 0; i < len; ++i)
    {
        printf("%d, ", arr[i]);
    }
    
}