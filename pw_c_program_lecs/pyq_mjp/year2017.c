
     // write a program to find the sum of aarray elements having 10 array elements using array as argument.

#include <stdio.h>

// Function to calculate the sum of array elements
int sumArrayElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Define an array of 10 integers
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]); // This will be 10

    // Call the sumArrayElements function and pass the array and its size
    int totalSum = sumArrayElements(arr, size);

    // Output the sum of array elements
    printf("Sum of array elements: %d\n", totalSum);

    return 0;
}
