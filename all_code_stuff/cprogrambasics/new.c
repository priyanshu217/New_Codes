#include <stdio.h>

// Function to calculate the sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    
    // Iterate through the array and add each element to the sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    int array[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int arraySize = sizeof(array) / sizeof(array[0]); // Calculate the size of the array

    // Calculate the sum of array elements using the sumArray function
    int result = sumArray(array, arraySize);

    // Output the sum
    printf("Sum of array elements: %d\n", result);

    return 0;
}
