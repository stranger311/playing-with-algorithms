#include <stdlib.h>

int BinarySearch(int items[],int size,int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (items[mid] != key && start < end) {

        if (key > items[mid]) {

            start = mid + 1;

        } else {

            end = mid - 1;

        }

        mid = (start + end) / 2;
    }

    return items[mid] == key ? mid : -1;

}

