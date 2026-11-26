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
    return -1;
}

int main(){
    int m = 8;
    int n = 8;

    double A[8][8] = {
        { 1, 10, 11, 12, 13, 14, 15, 16 },
        { 2, 17, 18, 19, 20, 21, 22, 23 },
        { 3, 24, 25, 26, 27, 28, 29, 30 },
        { 4, 31, 32, 33, 34, 35, 36, 37 },
        { 5, 38, 39, 40, 41, 42, 43, 44 },
        { 6, 45, 46, 47, 48, 49, 50, 51 },
        { 7, 52, 53, 54, 55, 56, 57, 58 },
        { 8, 60, 70, 80, 90,100,110,120 }
    };

    
}