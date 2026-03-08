#include <stdio.h>
#include "math_utils.h"

//Program to check if a number is prime or Not.
//Takes the number to check as the argument and return 0 for false and 1 for true
int  isPrime(int n){

	if(n <= 1)
	{
		printf("Invalid Input");
		return 0;
	}
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}



//Program to calculate the factorial of a number
int factorial(int n){
	if(n < 0)
	{
		printf("Invalid Input");
		return 0;
	}
	if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

//Function to either return nth fibonacci element and also print if flag = 1
int fibonacci(int n, int flag)
{
	int a = 0;
	int b = 1;
	if(flag == 1)	printf("0 1 ");
	for(int i  = 3; i <= n; i++)
	{
		int sum = a + b;
		a = b;
		b = sum;
		if(flag == 1)	printf("%d ", sum);
	}
	return b;
}


//Function to calculate the GCD between 2 numbers
int gcd(int a, int b)
{
	if(a < 1 || b < 1){
		printf("Invalid Input");
		return 0;
	}
	int rem = a % b;
	a = b;
	b = rem;
	while (rem != 0){
		rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

//Function to find the LCM of 2 numbers
int lcm(int a, int b){
	return a * b / gcd(a , b);
}


//Function to reverse a Number
int reverseNumber(int n)
{
	int temp = n;

	if(temp < 0){
		printf("Invalid Input");
		return 0;
	}
	int reverse = 0;
	while(temp != 0)
	{
		int digit = temp % 10;
		reverse = reverse * 10 + digit;
		temp = temp / 10;
	}
	return reverse;
}


//Function to Check if a number is Palindrome
int isPalindromeNumber(int n){
	if(reverseNumber(n) == n)	return 1;
	else	return 0;
}


//Function to return the sum of digits
int sumOfDigits(int n){
	int temp = n;
	if(temp < 0){
		printf("Invalid Input");
		return 0;
	}
	int sum = 0;
	while(temp != 0)
	{
		int digit = temp % 10;
		sum += digit;
		temp = temp / 10;
	}
	return sum;
}


//Function to find the power of a number
int power(int base, int exponent){
	if(exponent == 1)
		return base;
	else 	return base * power(base , exponent -1);
}


//Functio to find the number of digits in a number
int numberOfDigits(int n){
	int num = 0;
	while(n != 0){
		num++;
		n = n /10;
	}
	return num;
}

//Function to check if a number is ArmStrong or not
int isArmstrong(int n){
	int number_Of_Digits = numberOfDigits(n);
	int temp = n;
	if(n <= 0){
		printf("Invalid Input");
		return 0;
	}
	int sum = 0;
	while(n !=0 ){
		int digit = n %10;
		sum += power(digit, number_Of_Digits);
		n = n /10;
	}
	if(temp == sum)		return 1;
	else	return 0;
}
