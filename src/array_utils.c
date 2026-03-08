#include <stdio.h>
#include "array_utils.h"

//Function to print the array
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


//Function to find the Max in an Array
int findMax(int arr[], int size){
    if(size == 0)
        return 0;

    int max = arr[0];

    for(int i = 1; i < size; i++){
        if(max < arr[i])    max = arr[i];
    }
    return max;
}



//Function to find the Min in an Array
int findMin(int arr[], int size){
    if(size == 0)
        return 0;

    int min = arr[0];

    for(int i = 1; i < size; i++){
        if(min > arr[i])    min= arr[i];
    }
    return min;
}

//Function to reverse the array
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


//Function to find the second largest in the array
int findSecondLargest(int arr[], int size){
    if(size <= 1)   return 0;
    int max = 0;
    int max2 = 0;
    if(arr[0] > arr[1]){
        max = arr[0];
        max2 = arr[1];
    }
    else{
        max= arr[1];
        max2 = arr[0];
    }

    for(int i = 2; i < size; i++)
    {
        if(arr[i] > max2)
        {
            if(!(arr[i] <= max)){
                max2 = max;
                max = arr[i];
            }
            else    max2 = arr[i];
        }
    }
    return max2;
}


//Function to find the sum of the array
int arraySum(int arr[], int size){
    if(size == 0)   return 0;
    int sum = arr[0];
    for(int i = 1; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}


//Function to find an element by LinearSearch and
//return index if present and -1 if not
int linearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if (target == arr[i])
            return i;
    }
    return -1;
}

//Function to find the Average of the Array
float arrayAverage(int arr[], int size){
    int sum = arraySum(arr, size);
    return sum / size;
}

//Function to rotate the Array Left by m spaces
void rotateArrayLeft(int arr[], int size, int m){
    reverseArray(arr, m);
    int start = m;
    int end = size - 1;

    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    reverseArray(arr, size);
}


//Function to find an element by BinarySearch and
//return index if present and -1 if not
int binarySearch(int arr[], int size, int target){
    if(size < 1) return -1;
    int left = 0;
    int right = size - 1;
    
    while(left <= right){
        int mid = (left+right) / 2;

        if(arr[mid] < target)   left = mid + 1;
        else if(arr[mid] > target)  right = mid-1;
        else    return mid;
    }
    return -1;
}