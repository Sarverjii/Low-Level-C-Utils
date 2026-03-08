#ifndef MATH_UTILS_H
#define MATH_UTILS_H

// Checks whether the given number is prime
// Returns 1 if prime, otherwise 0
int isPrime(int n);

// Calculates the factorial of a number (n!)
int factorial(int n);

// Returns the nth Fibonacci number
// flag can be used to control implementation behavior if needed
int fibonacci(int n, int flag);

// Returns the greatest common divisor of two numbers
int gcd(int a, int b);

// Returns the least common multiple of two numbers
int lcm(int a, int b);

// Reverses the digits of a number
int reverseNumber(int n);

// Checks if a number is a palindrome
// Returns 1 if palindrome, otherwise 0
int isPalindromeNumber(int n);

// Returns the sum of the digits of a number
int sumOfDigits(int n);

// Calculates base raised to the power of exponent
int power(int base, int exponent);

// Returns the number of digits in a number
int numberOfDigits(int n);

// Checks if a number is an Armstrong number
// Returns 1 if true, otherwise 0
int isArmstrong(int n);

#endif