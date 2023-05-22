#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int sum_of_negatives(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Get the size of the array from the user
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Create the array and fill it with random numbers
    int arr[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 201 - 100; // Generate a random number between -100 and 100
    }