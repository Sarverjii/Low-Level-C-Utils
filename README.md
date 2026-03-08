# Low Level C Utility Library

A collection of low-level utility functions implemented in C from scratch.
This project implements commonly used **array operations, mathematical functions, and string manipulation utilities** without relying on the standard library implementations.

The goal of this project is to strengthen **low-level programming skills, memory management, and algorithmic understanding in C**.

---

## Project Structure

```
Low-Level-C
│
├── include
│   ├── array_utils.h
│   ├── math_utils.h
│   └── strings_utils.h
│
├── src
│   ├── array_utils.c
│   ├── math_utils.c
│   └── strings_utils.c
│
├── tests
│   ├── array_main.c
│   ├── main_math.c
│   └── strings_main.c
│
├── CMakeLists.txt
└── README.md
```

---

## Modules

### Array Utilities

Functions for performing common array operations.

* printArray
* findMax
* findMin
* reverseArray
* findSecondLargest
* arraySum
* linearSearch
* arrayAverage
* rotateArrayLeft
* binarySearch

---

### Math Utilities

Functions for performing mathematical computations.

* isPrime
* factorial
* fibonacci
* gcd
* lcm
* reverseNumber
* isPalindromeNumber
* sumOfDigits
* power
* numberOfDigits
* isArmstrong

---

### String Utilities

Custom string functions implemented without using `string.h`.

* createString
* strLength
* strCopy
* strCompare
* strConcat
* strFindSubstring
* strReverse
* strTrim
* removeDuplicates
* replaceSubstring
* strToInt
* intToStr
* strDuplicate
* strSafeLength

---

## Building the Project

The project uses **CMake**.

### Build Steps

```
mkdir build
cd build
cmake ..
make
```

---

## Running Tests

After building, run the test programs:

```
./array_test
./math_test
./strings_test
```

These programs demonstrate and validate the functionality of each module.

---

## Purpose of the Project

This project was created to:

* Practice low-level C programming
* Implement standard algorithms manually
* Understand pointer manipulation and memory management
* Build reusable utility libraries in C

---

## Author

**Shashank Sarth Verma**
B.Tech, Jawaharlal Nehru University
