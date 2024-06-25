#include<iostream>
using namespace std;

class DynamicDataArray {
private:
    int* array; // Pointer to the dynamically allocated array
    int size; // Current number of elements
    int capacity; // Current capacity of the array

    // Function to resize the array when needed
    void resizeArray(int newCapacity) {
        int* newArray = new int[newCapacity];
        for (int i = 0; i < size; i++) {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
        capacity = newCapacity;
    }

public:
    // Constructor
    DynamicDataArray() : size(0), capacity(1) {
        array = new int[capacity];
    }

    // Destructor
    ~DynamicDataArray() {
        delete[] array;
    }

    // Add an item to the array
    void addItem(int n) {
        if (size == capacity) {
            resizeArray(capacity * 2); // Double the capacity
        }
        array[size++] = n;
    }

    // Delete the last item from the array
    void delItem() {
        if (size > 0) {
            size--;
            // Optional: Resize down if too much unused capacity
        }
    }

    // Function to print the contents of the array (for demonstration)
    void printArray() {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};