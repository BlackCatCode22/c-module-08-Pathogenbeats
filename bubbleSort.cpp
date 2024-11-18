// Andrew Powell 11/18/2024
// bubbleSort.cpp
#include <iostream>

using namespace std;

// Bubble Sort function
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    cout << "My BubbleSort Program:\nRemember: O(n^2) Quadratic Time!\n" << endl;

    // Array initialization
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};

    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);

    // Call the bubbleSort function
    bubbleSort(array, size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
