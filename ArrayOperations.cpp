#include <iostream>

const int MAX_SIZE = 100;

// Function to insert an element into an array
void insertElement(int arr[], int& size, int index, int value) {
    if (index >= 0 && index <= size && size < MAX_SIZE) {
        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        size++;
        std::cout << "Element inserted successfully." << std::endl;
    } else {
        std::cout << "Invalid index for insertion." << std::endl;
    }
}

// Function to delete an element from an array
void deleteElement(int arr[], int& size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        std::cout << "Element deleted successfully." << std::endl;
    } else {
        std::cout << "Invalid index for deletion." << std::endl;
    }
}

// Function to search for an element in an array
int searchElement(const int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

// Function to traverse and display elements in an array
void traverseAndDisplay(const int arr[], int size) {
    std::cout << "Array Elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to update an element in an array
void updateElement(int arr[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
        std::cout << "Element updated successfully." << std::endl;
    } else {
        std::cout << "Invalid index for update." << std::endl;
    }
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;

    // Array Traversal
    traverseAndDisplay(arr, size);

    // Array Insertion at index 2 with value 10
    insertElement(arr, size, 2, 10);
    traverseAndDisplay(arr, size);

    // Array Deletion at index 3
    deleteElement(arr, size, 3);
    traverseAndDisplay(arr, size);

    // Array Search for value 4
    int searchIndex = searchElement(arr, size, 4);
    if (searchIndex != -1) {
        std::cout << "Element 4 found at index " << searchIndex << "." << std::endl;
    } else {
        std::cout << "Element 4 not found in the array." << std::endl;
    }

    // Array Update at index 1 with new value 8
    updateElement(arr, size, 1, 8);
    traverseAndDisplay(arr, size);

    return 0;
}
