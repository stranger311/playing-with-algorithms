int min(int a, int b) {
    return a < b ? a : b;
}

int BinarySearch(int arr[], int low, int high, int key) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) return mid;

        if (arr[mid] > key)
            return BinarySearch(arr, low, mid - 1, key);
        else
            return BinarySearch(arr, mid + 1, high, key);
    }

    return -1;
}

int ExponentialSearch(int arr[], int size, int key) {
    int i = 1;

    if (arr[0] == key) {
        return 0;
    }

    while (i < size && arr[i] <= key) {
        i *= 2;
    }

    return BinarySearch(arr, i / 2, min(i, size), key);

}
