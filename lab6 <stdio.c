#include <stdio.h>

int binarySearch(int numbers[], int low, int high, int value) {
    if (low > high) {
        
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (numbers[mid] == value) {
        
        return mid;
    } else if (numbers[mid] > value) {
        
        return binarySearch(numbers, low, mid - 1, value);
    } else {
        
        return binarySearch(numbers, mid + 1, high, value);
    }
}

int search(int numbers[], int low, int high, int value) {
    return binarySearch(numbers, low, high, value);
}

int main() {
    
    return 0;
}
