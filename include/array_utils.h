#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

// Prints all elements of the array
void printArray(int arr[], int size);

// Returns the maximum element in the array
int findMax(int arr[], int size);

// Returns the minimum element in the array
int findMin(int arr[], int size);

// Reverses the array in place
void reverseArray(int arr[], int size);

// Returns the second largest element in the array
int findSecondLargest(int arr[], int size);

// Returns the sum of all elements in the array
int arraySum(int arr[], int size);

// Performs linear search for target in the array
// Returns the index of the element if found, otherwise -1
int linearSearch(int arr[], int size, int target);

// Returns the average value of the elements in the array
float arrayAverage(int arr[], int size);

// Rotates the array to the left by m positions
void rotateArrayLeft(int arr[], int size, int m);

// Performs binary search on a sorted array
// Returns the index of the element if found, otherwise -1
int binarySearch(int arr[], int size, int target);

#endif