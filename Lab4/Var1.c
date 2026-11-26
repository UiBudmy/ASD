#include <stdio.h>


int search(double arr [], int size, double x){
    int leftbor = 0;
    int rightbor = size - 1;

    while (leftbor <= rightbor){
        int mid = (leftbor + rightbor) / 2;

        if (arr[mid] == x){
            return mid;
        } 
        else if (arr[mid] > x) {
            leftbor = mid + 1;
        } 
        else {
            rightbor = mid - 1;
        }
    }
    return 0;
}