
  //write a program to insert and deletion of new elements in array

#include <stdio.h>

#define MAX_SIZE 100 // Maximum size for the array

// Function to display the elements of the array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specified position in the array
int insertElement(int arr[], int *size, int capacity, int element, int position) {
    if (*size >= capacity) {
        printf("Array is full. Cannot insert element.\n");
        return -1; // Return -1 to indicate failure
    }

    if (position < 0 || position > *size) {
        printf("Invalid position. Insertion failed.\n");
        return -1; // Return -1 to indicate failure
    }

    // Shift elements to the right from position to make space for new element
    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Increment the size of the array
    (*size)++;

    return 0; // Return 0 to indicate success
}

// Function to delete an element from a specified position in the array
int deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position. Deletion failed.\n");
        return -1; // Return -1 to indicate failure
    }

    // Shift elements to the left from position
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    (*size)--;

    return 0; // Return 0 to indicate success
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int capacity = MAX_SIZE;

    // Insert initial elements into the array
    insertElement(arr, &size, capacity, 10, 0);
    insertElement(arr, &size, capacity, 20, 1);
    insertElement(arr, &size, capacity, 30, 2);
    insertElement(arr, &size, capacity, 40, 3);

    // Display the array
    displayArray(arr, size);

    // Insert a new element at position 2
    insertElement(arr, &size, capacity, 50, 2);
    printf("Array after insertion: ");
    displayArray(arr, size);

    // Delete the element at position 3
    deleteElement(arr, &size, 3);
    printf("Array after deletion: ");
    displayArray(arr, size);

    return 0;
}
