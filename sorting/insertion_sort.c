void insertion_sort(int *arr,int size) {

    int i,j,item;

    for (i = 1; i < size;i ++) {

        item = *(arr + i);

        for (j = i - 1; j >= 0 && arr[j] > item; j--) {
            *(arr + j + 1) = *(arr + j);
        }

        *(arr + j + 1) = item;

    }

}