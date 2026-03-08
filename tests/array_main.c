#include <stdio.h>
#include "array_utils.h"

int main()
{
int arr[] = {10, 5, 8, 20, 15, 3, 12};
int size = sizeof(arr) / sizeof(arr[0]);

printf("========== ORIGINAL ARRAY ==========\n");
printArray(arr, size);


printf("\n========== MAX ELEMENT ==========\n");
printf("Max = %d\n", findMax(arr, size));


printf("\n========== MIN ELEMENT ==========\n");
printf("Min = %d\n", findMin(arr, size));


printf("\n========== ARRAY SUM ==========\n");
printf("Sum = %d\n", arraySum(arr, size));


printf("\n========== ARRAY AVERAGE ==========\n");
printf("Average = %.2f\n", arrayAverage(arr, size));


printf("\n========== SECOND LARGEST ==========\n");
printf("Second Largest = %d\n", findSecondLargest(arr, size));


printf("\n========== LINEAR SEARCH ==========\n");
int target = 20;
int index = linearSearch(arr, size, target);
printf("Element %d found at index %d\n", target, index);


printf("\n========== REVERSE ARRAY ==========\n");
reverseArray(arr, size);
printArray(arr, size);


printf("\n========== ROTATE LEFT ==========\n");
int arr2[] = {1,2,3,4,5,6,7};
int size2 = sizeof(arr2) / sizeof(arr2[0]);

printf("Before rotation:\n");
printArray(arr2, size2);

rotateArrayLeft(arr2, size2, 2);

printf("After rotation by 2:\n");
printArray(arr2, size2);


printf("\n========== BINARY SEARCH ==========\n");
int sorted[] = {1,3,5,7,9,11,13};
int size3 = sizeof(sorted) / sizeof(sorted[0]);

printf("Sorted array:\n");
printArray(sorted, size3);

int t = 9;
int pos = binarySearch(sorted, size3, t);

printf("Element %d found at index %d\n", t, pos);


printf("\n========== EDGE TEST ==========\n");
int single[] = {42};

printf("Array with one element:\n");
printArray(single, 1);

printf("Max = %d\n", findMax(single,1));
printf("Min = %d\n", findMin(single,1));
printf("Sum = %d\n", arraySum(single,1));
printf("Average = %.2f\n", arrayAverage(single,1));


return 0;
}
