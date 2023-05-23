#include <iostream>
#include <vector>

int sum_diagonal(int** arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i][i];
    }
    return sum;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Create a 2D array of user-defined size
    int** arr = new int* [size];
    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
    }

    // Populate the array with user input
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << "Enter a number for position [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];
        }
    }

    // Calculate the sum of the diagonal
    int diagonal_sum = sum_diagonal(arr, size);
    std::cout << "The sum of the diagonal is: " << diagonal_sum << std::endl;

    // Free memory allocated for the array
    for (int i = 0; i < size; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}