#include <stdio.h>
#include <stdlib.h>

int recBinarySearch(int arr[],int low,int high, int value){
    if(high >= low){

        int middle = (low+high)/2;

        if(arr[middle]==value)
            return middle+1;
        else if (arr[middle]>value)
            return recBinarySearch(arr,low,middle-1,value);
        else
            return recBinarySearch(arr,middle+1,high,value);
    }
    return -1;
}

